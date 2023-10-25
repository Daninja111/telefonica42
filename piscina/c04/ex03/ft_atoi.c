/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damazzin <damazzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 18:40:10 by damazzin          #+#    #+#             */
/*   Updated: 2023/03/30 19:13:29 by damazzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>

int ft_len_spaces(char *str)
{
    int i;
    
    i = 0;
    while (str[i] == ' ')
    {
        i++;
    }
    return (i);
}

int ft_is_negative(char *str)
{
    int i;
    int ngtv;
    
    i = 0;
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
        {
            ngtv++;
        }
        i++;
    }
    return (ngtv);
}
bool ft_is_ngtv(int ngtv)
{
    if (ngtv % 2 == 0)
    {
        return (false);
    }
    else
    {
        return (true);
    }    
}
int main(void)
{
    char    str[] = "   ---+--23423";
    int signo;
    printf("%d", ft_len_spaces(str));
    signo = ft_is_negative(str);
    printf("%d", ft_is_ngtv(signo));
    return (0);
}