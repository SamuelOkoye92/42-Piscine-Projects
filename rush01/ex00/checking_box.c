/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking_box.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokoye <sokoye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 17:44:19 by sokoye            #+#    #+#             */
/*   Updated: 2024/02/12 19:43:00 by sokoye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	bottomtop(int box[4][4], int sides[4][4]);
int	leftright(int box[4][4], int sides[4][4]);

/*side array for mazimum building height from each side*/
int	ft_checking(int box[4][4], int sides[4][4])
{
	if (!bottomtop(box, sides))
		return (0);
	if (!leftright(box, sides))
		return (0);
	return (1);
}

/* check if a 4x4 integer grid box represents a valid solution to the game based on constraints given in the side grid.
It checks if there is the same value in two sales in a role or column. It there is it returns false. */
int	is_valid_skyscraper(int box[4][4], int sides[4][4])
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			k = j + 1;
			while (k < 4)
			{
				if (box[i][j] == box[i][k] || box[j][i] == box[k][i])
					return (0);
				k++;
			}
			j++;
		}
		i++;
	}
	if (!ft_checking(box, sides))
		return (0);
	return (1);
}
