/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokoye <sokoye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 17:45:19 by sokoye            #+#    #+#             */
/*   Updated: 2024/02/12 14:29:43 by sokoye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	riddle_board(int sides[4][4]);
int	verify(int argc, char **argv, int numbers[]);

/* the numbers array is for the input and then fills the side array with the numbers entered*/
void	fill_sides(int numbers[], int sides[4][4])
{
	/* variables for the Row, Column and Numbers arrays*/
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	/* while loop iterates 4 times since there are only 4 rows */
	while (i < 4)
	{
		/* while loop iterates 4 times since there are only 4 columns */
		j = 0;
		while (j < 4)
		{
			/* this basically fills the rows and columns with the numbers entered sequentially */
			sides[i][j] = numbers[k];
			k++;
			j++;
		}
		i++;
	}
}

/* argc stores the number of command-line arguments passed to the program. */
/* argv is an array of character pointers pointing to each argument string. */
int	main(int argc, char **argv)
{
	int	numbers[16];
	int	sides[4][4];

	if (verify(argc, argv, numbers) != 0)
	{
		write(1, "error\n", 6);
		return (0);
	}
	fill_sides(numbers, sides);
	riddle_board(sides);
	return (0);
}
