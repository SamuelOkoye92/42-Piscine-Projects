/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokoye <sokoye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 18:32:37 by sokoye            #+#    #+#             */
/*   Updated: 2024/02/13 10:55:32 by sokoye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	char_to_int(char c)
{
	return (c - 48);
}

/* verify if  the numbers in the number arrays are within the range of 1 to 4 */
int	verify_nbr(int numbers[], int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (numbers[i] < 1 || numbers[i] > 4)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

void	update_count_and_temp(int *count, int *temp, int numbers[])
{
	numbers[*count] = *temp;
	(*count)++;
	*temp = 0;
}

/* argc count the no of arguments including the file number
argv is the number of argument varaibles.
The verify function serves as a preliminary validation step for input in a program, */
int	verify(int argc, char **argv, int numbers[])
{
	if (argc != 2)
	{
		return (1);
	}
	char	*input = argv[1];
	/* the count helps to keep track of the number of numbers successfully
	extracted from the input string.*/
	int	count = 0;
	/* temp temporary store digits being built as the code iterrate through the loop*/
	int	temp = 0;

	while (*input)
	{
		/* It converts the digit character to its numerical value using char_to_int 
		(presumably a custom function) and adds it to the temp variable. 
		This builds the number being read from the input.*/
		if (*input >= '0' && *input <= '9')
		{
			temp = temp * 10 + char_to_int(*input);
		}
		else if (*input == ' ')
		{
			/*  This effectively separates numbers in the input string. */
			update_count_and_temp(&count, &temp, numbers);
		}
		else
		{
			/* else it returns 1 error if thr input is not a number of character*/
			return (1);
		}
		input++;
	}

	update_count_and_temp(&count, &temp, numbers);

	if (count != 16 || !verify_nbr(numbers, 16))
	{
		return (1);
	}
	return (0);
}
