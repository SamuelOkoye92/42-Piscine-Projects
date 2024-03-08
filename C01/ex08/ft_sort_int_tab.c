/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokoye <sokoye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 09:08:40 by sokoye            #+#    #+#             */
/*   Updated: 2024/02/16 12:49:37 by sokoye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	temp;

	a = 0;
	while (a < (size - 1))
	{
		b = 0;
		while (b < size - 1)
		{
			if (tab[b] > tab [b + 1])
			{
				temp = tab [b];
				tab [b] = tab [b + 1];
				tab [b + 1] = temp;
			}
			b++;
		}
		a++;
	}
}
*/


void	ft_sort_int_tab(int *tab, int size)
{
	int a;
	int b;
	int temp;

	a = 0;
	while (a < size)
	{ 
		while(b < size - 1)
		{
			if(tab[b] >tab[b - 1])
			{
				int temp = tab[b];
				tab[b] = tab[b + 1];
				tab[b + 1] = temp;
			}
			b++;
		}
		a++;
	}
}
