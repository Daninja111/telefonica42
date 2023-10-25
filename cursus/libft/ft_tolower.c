/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damazzin <damazzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 19:46:30 by damazzin          #+#    #+#             */
/*   Updated: 2023/06/02 13:18:44 by damazzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c > 64 && c < 91)
	{
		c += 32;
	}
	return (c);
}

/*int   main(void)
{
    char str[] = "AZ";
    printf("%s", ft_strlowcase(str));
    return (0);
}*/