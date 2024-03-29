/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokoye <sokoye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 14:46:08 by sokoye            #+#    #+#             */
/*   Updated: 2024/02/19 15:35:37 by sokoye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	sqr;

	sqr = 1;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (sqr <= nb / sqr)
	{
		if (sqr * sqr == nb)
			return (sqr);
		else
			sqr++;
	}
	return (0);
}
/*
int main ()
{
	printf("%d", ft_sqrt(8));
	return (0);
}
*/
