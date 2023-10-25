/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damazzin <damazzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 16:51:22 by damazzin          #+#    #+#             */
/*   Updated: 2023/06/06 15:56:51 by damazzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t			needle_len;
	const char		*p;

	if (*needle == '\0')
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	if (ft_strlen(needle) > ft_strlen(haystack) || ft_strlen(needle) > len)
		return (NULL);
	needle_len = 0;
	p = needle;
	while (*p != '\0' && needle_len < len)
	{
		needle_len++;
		p++;
	}
	while (*haystack != '\0' && needle_len <= len)
	{
		if (ft_strncmp(haystack, needle, needle_len) == 0)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
/*int	main(void)
{
	char *big = "oh no not the empty string !";
 	char *little = "";
 	size_t max = 0;
 	char *s1 = strnstr(big, little, max);
 	char *s2 = ft_strnstr(big, little, max);

 	printf("No son iguales: %s\n", s2);
	printf("Debe ser: %s", s1);
 	if (s1 == s2)
 		printf("Son iguales");
}
*/