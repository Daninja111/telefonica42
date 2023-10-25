/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damazzin <damazzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:34:59 by damazzin          #+#    #+#             */
/*   Updated: 2023/06/06 15:38:52 by damazzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str != (char)c)
	{
		if (*str == '\0')
			return (NULL);
		str++;
	}
	return (str);
}

/*int main(void)
{
	char *src = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
 	char *d1 = strchr(src, 's');
 	char *d2 = ft_strchr(src, 's');
	
	printf("Muestra: %s\n", strchr(src, 's'));
	printf("Mine: %s\n", ft_strchr(src, 's'));
 	if (d1 == d2)
 		printf("success");
}*/