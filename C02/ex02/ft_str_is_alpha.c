/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokoye <sokoye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 11:12:05 by sokoye            #+#    #+#             */
/*   Updated: 2024/02/20 18:15:49 by sokoye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_str_is_alpha(char *str)
{
	int	c;
	int	upcase;
	int	lowcase;

	c = 0;
	while (str[c] != '\0')
	{
		upcase = (str[c] >= 'A' && str[c] <= 'Z');
		lowcase = (str[c] >= 'a' && str[c] <= 'z');
		if (!(lowcase || upcase))
		{
			return (0);
		}
		c++;
	}
	return (1);
}
