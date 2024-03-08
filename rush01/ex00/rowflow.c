/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rowflow.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokoye <sokoye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 18:31:02 by sokoye            #+#    #+#             */
/*   Updated: 2024/02/12 20:47:56 by sokoye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_left(int box[4][4], int sides[4][4])
{
	int	i;
	/* peak: Tracks the tallest building seen so far (initialized to 0). */
	int	peak;
	int	j;
	/* count: Keeps track of the number of buildings visible from the left. */
	int	count;

	i = 0;
	while (i < 4)
	{
		peak = 0;
		count = 0;
		j = 0;
		while (j < 4)
		{
			/* If the current building height (box[i][j]) is greater than the tallest seen so far */
			if (box[i][j] > peak)
			{
				/* Updates peak with the new highest value. */
				peak = box[i][j];
				count++;
			}
			j++;
		}
		/* Finally, compares the counted visible buildings
		 (count) with the constraint for the left of that row (sides[2][i]). */
		if (sides[2][i] != count)
			return (0);
		i++;
	}
	return (1);
}

/* Works similarly to check_left but iterates through columns in descending order 
starting from the right (j = 3) to check the constraints for the right of each row (sides[3][i]) */
int	check_right(int box[4][4], int sides[4][4])
{
	int	i;
	int	peak;
	int	j;
	int	count;

	i = 0;
	while (i < 4)
	{
		peak = 0;
		count = 0;
		j = 3;
		while (j >= 0)
		{
			if (box[i][j] > peak)
			{
				peak = box[i][j];
				count++;
			}
			j--;
		}
		if (sides[3][i] != count)
			return (0);
		i++;
	}
	return (1);
}

int leftright(int box[4][4], int sides[4][4])
{
	if (!check_left(box, sides))
		return (0);
	if (!check_right(box, sides))
		return (0);
	return (1);
}
