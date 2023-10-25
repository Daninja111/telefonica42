/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damazzin <damazzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 18:22:22 by damazzin          #+#    #+#             */
/*   Updated: 2023/06/07 15:05:05 by damazzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			count++;
			while (*s != c && *s != '\0')
				s++;
		}
		else
			s++;
	}
	return (count);
}

static char	*ft_extract_word(const char *s, char c)
{
	size_t	len;
	char	*word;

	len = 0;
	while (s[len] != c && s[len] != '\0')
		len++;
	word = (char *)malloc((len + 1) * sizeof(char));
	ft_strlcpy(word, s, len + 1);
	word[len] = '\0';
	return (word);
	free(word);
}

static void	ft_is_word(const char *s, char c, char **res)
{
	int	i;
	int	is_word;

	i = 0;
	is_word = 0;
	while (*s != '\0')
	{
		if (*s != c && !is_word)
		{
			res[i] = ft_extract_word(s, c);
			i++;
			is_word = 1;
			while (*s != c && *s != '\0')
				s++;
		}
		else if (*s == c)
		{
			is_word = 0;
			s++;
		}
		else
			s++;
	}
}

char	**ft_split(char const *s, char c)
{
	int		num_words;
	char	**res;

	if (s == NULL)
		return (NULL);
	num_words = ft_count_words(s, c);
	res = (char **)malloc((num_words + 1) * sizeof(char *));
	if (res == NULL)
		return (NULL);
	ft_is_word(s, c, res);
	res[num_words] = NULL;
	return (res);
	free(res);
}
