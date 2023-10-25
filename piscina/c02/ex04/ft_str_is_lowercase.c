/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damazzin <damazzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 19:37:37 by damazzin          #+#    #+#             */
/*   Updated: 2023/03/29 20:09:13 by damazzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/*int main(void)
{
    char str[] = "546fgh";
    printf("%d", ft_str_is_lowercase(str));
    return (0);
}*/