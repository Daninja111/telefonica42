/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damazzin <damazzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 16:48:49 by damazzin          #+#    #+#             */
/*   Updated: 2023/05/26 18:16:56 by damazzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim_str;
	size_t	start;
	size_t	end;
	size_t	len_s1;
	size_t	len_set;

	if (s1 == NULL || set == NULL)
		return (0);
	if (s1[0] == '\0' || set[0] == '\0')
		return (ft_strdup(s1));
	len_s1 = ft_strlen(s1);
	len_set = ft_strlen(set);
	start = 0;
	end = len_s1 - 1;
	while (s1[start] != '\0' && ft_strchr(set, s1[start]) != NULL)
		start++;
	while (end > start && ft_strchr(set, s1[end]) != NULL)
		end--;
	trim_str = (char *)malloc((end - start + 2) * sizeof(char));
	if (trim_str == NULL)
		return (NULL);
	ft_strlcpy(trim_str, s1 + start, end - start + 2);
	trim_str[end - start + 1] = '\0';
	return (trim_str);
}
