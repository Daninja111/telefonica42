/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damazzin <damazzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 20:07:25 by damazzin          #+#    #+#             */
/*   Updated: 2023/06/02 13:18:18 by damazzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c > 96 && c < 123)
	{
		c -= 32;
	}
	return (c);
}

/*int   main(void)
{
    char str[] = "AZ";
    printf("%s", ft_strlowcase(str));
    return (0);
}*/