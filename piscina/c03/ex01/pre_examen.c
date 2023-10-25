/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pre_examen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damazzin <damazzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 14:07:21 by damazzin          #+#    #+#             */
/*   Updated: 2023/03/24 14:17:57 by damazzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char str1)
{
    write(1, &str1, 1);
}

int main()
{
    char    str1[] = "Hola";
    int i;
    i = 0;
    while (str1[i] != '\0')
    {
        ft_putchar(str1[i]);
        i++;
    }

    return (0);
}