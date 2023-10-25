/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damazzin <damazzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 14:47:56 by damazzin          #+#    #+#             */
/*   Updated: 2023/06/07 15:15:36 by damazzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	s_len;
	size_t	substr_len;

	s_len = ft_strlen(s);
	if (start > s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		substr_len = s_len - start;
	else
		substr_len = len;
	substr = (char *)malloc((substr_len + 1) * sizeof(char));
	if (substr == NULL)
	{
		return (NULL);
	}
	ft_strlcpy(substr, s + start, substr_len + 1);
	substr[substr_len] = '\0';
	return (substr);
}

/*int	main(void)
{
	char const	string[] = "lorem ilsum dolor sit amet";
	
	printf("Resultado: %s", ft_substr(string, 0, 10));
	return (0);
}*/
