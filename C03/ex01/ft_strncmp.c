/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokoye <sokoye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 09:39:16 by sokoye            #+#    #+#             */
/*   Updated: 2024/02/07 17:49:55 by sokoye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	c;

	c = 0;
	while (c < n && s1[c] && s2[c] && (s1[c] == s2[c]))
	{
		c++;
	}
	if (c == n)
	{
		return (0);
	}
	else
	{
		return ((unsigned char)s1[c] - (unsigned char)s2[c]);
	}
}
