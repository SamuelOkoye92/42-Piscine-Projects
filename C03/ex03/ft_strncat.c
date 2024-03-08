/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokoye <sokoye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 12:21:59 by sokoye            #+#    #+#             */
/*   Updated: 2024/02/07 13:04:20 by sokoye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	d;
	int	s;

	d = 0;
	s = 0;
	while (dest[d])
	{
		d++;
	}
	while (src[s] && nb)
	{
		dest[d] = src [s];
		d++;
		s++;
		nb--;
	}
	dest[d] = '\0';
	return (dest);
}
