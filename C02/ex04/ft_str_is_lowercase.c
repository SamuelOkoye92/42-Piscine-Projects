/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokoye <sokoye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 13:38:53 by sokoye            #+#    #+#             */
/*   Updated: 2024/02/09 12:14:26 by sokoye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_str_is_lowercase(char *str)
{
	int	c;

	c = 0;
	while (str [c])
	{
		if (!(str [c] >= 'a' && str [c] <= 'z'))
		{
			return (0);
		}
		c++;
	}
	return (1);
}