/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokoye <sokoye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:53:01 by sokoye            #+#    #+#             */
/*   Updated: 2024/02/19 19:54:12 by sokoye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void putchar(char c)
{
    write(1, &c, 1);
}

int main(int argc, char *argv[])
{
    int i;
    int j;

    j = 1;
    while (j < argc)
    {
        i = 0;
        while (argv[j][i])
        {
            putchar(argv[j][i]);
            i++;
        }
        putchar('\n');
        j++;
    }

    return (0);
}