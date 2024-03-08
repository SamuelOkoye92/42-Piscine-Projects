/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokoye <sokoye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 17:45:37 by sokoye            #+#    #+#             */
/*   Updated: 2024/02/12 16:59:03 by sokoye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* the box array represents the current state of the puzzle solution*/
/* the sides array contains the number of visible skyscrappers from each side of the grid */
int	is_valid_skyscraper(int box[4][4], int sides[4][4]);

/* the sides array contains the number of visible skyscrappers from each side of the grid, 
and also converts from int to char and then print the solved puzzle grid in a human readeable format */
	void print_box(int box[4][4])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			char	c;
			c = box[i][j] + '0';
			write(1, &c, 1);
			if (j != 3)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

/* check if the element in the box is occupied, meaning fully filled grid.*/
int is_box_full(int box[4][4])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (box[i][j] != 4)
			{
				return 0;
			}
			j++;
		}
		i++;
	}
	return 1;
}

/* This function modifies the 4x4 integer array box, incrementing its values in a base-4 system. */
void	increment_base_4(int box[4][4])
{
	int	i;
	int	j;

	i = 3;
	j = 3;
	while (i >= 0)
	{
		j = 3;
		while (j >= 0)
		{
			if (box[i][j] < 4)
			{
				box[i][j]++;
				return;
			}
			else
			{
				box[i][j] = 1;
			}
			j--;
		}
		i--;
	}
}

int	riddle_board(int sides[4][4])
{
	int	box[4][4];

	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			box[i][j] = 1;
			j++;
		}
		i++;
	}

	while (!is_valid_skyscraper(box, sides) && !is_box_full(box))
	{
		increment_base_4(box);
	}

	if (is_valid_skyscraper(box, sides))
	{
		print_box(box);
	}
	else
	{
		write(1, "error1\n", 7);
	}

	return (0);
}
