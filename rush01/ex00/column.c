/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   column.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokoye <sokoye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 18:32:18 by sokoye            #+#    #+#             */
/*   Updated: 2024/02/12 20:40:14 by sokoye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* checks if the number of visible buildings from the top of each column in the box matches the 
corresponding constraint in the sides array*/
int check_top(int box[4][4], int sides[4][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		int	tallest;
		int	count;
		int	j;

		tallest = 0;
		count = 0;
		j = 0;
		while (j < 4)
		{
			/* If the current building height (box[j][i]) is greater than the tallest building
			seen so far, it means a new building is visible from the top: */
			if (box[j][i] > tallest)
			{
				/* Updates tallest with the new highest value. */
				tallest = box[j][i];
				/* Increments count to track the number of visible buildings. */
				count++;
			}
			j++;
		}
		/* Finally, compares the counted visible buildings (count) with the constraint
		for the top of that column (sides[0][i]). */
		if (sides[0][i] != count)
		{
			return (0);
		}
		i++;
	}
	/* If all columns pass the comparison, the function returns 1 (valid). */
	return (1);
}

/* Works similarly to check_top but iterates through rows in descending order starting from
 the bottom (j = 3) to check the constraints for the bottom of each column (sides[1][i]).*/
int	check_bottom(int box[4][4], int sides[4][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		int tallest = 0;
		int count = 0;
		int j = 3;

		tallest = 0;
		count = 0;
		j = 3;
		while (j >= 0)
		{
			if (box[j][i] > tallest)
			{
				/* Updates tallest with the new highest value. */
				tallest = box[j][i];
				count++;
			}
			j--;
		}
		if (sides[1][i] != count)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	bottomtop(int box[4][4], int sides[4][4])
{
	int	checks_passed;
	/* It uses a variable checks_passed initialized to 1 (assuming validity). */
	checks_passed = 1;
	/*It performs a bitwise AND operation (&=) with the return values of check_top and check_bottom
	the Bitwise and returns 1 meaning true if both conditions are true, else it returns 0(false)*/
	checks_passed &= check_top(box, sides);
	checks_passed &= check_bottom(box, sides);
	/*Finally, it returns checks_passed, which indicates 
	if both top and bottom checks passed (1) or not (0)*/
	return (checks_passed);
}
