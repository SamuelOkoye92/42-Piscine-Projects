/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokoye <sokoye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 16:10:55 by sokoye            #+#    #+#             */
/*   Updated: 2024/02/05 19:57:44 by sokoye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	dig;

	dig = '0';
	while (dig <= '9')
	{
		write(1, &dig, 1);
		dig++;
	}
}


int main()
{}