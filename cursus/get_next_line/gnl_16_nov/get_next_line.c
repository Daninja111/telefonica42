/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damazzin <damazzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:12:07 by damazzin          #+#    #+#             */
/*   Updated: 2023/11/16 17:56:12 by damazzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_substr(char *s, unsigned int start, size_t len)
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

char	*ft_temp(int fd, char *buf)
{
	int		chars_read;
	char	*temp;
	char	*tmp2;

	temp = NULL;
	if (*buf)
	{
		temp = ft_substr(buf, 0, ft_strlen(buf));
	}
	chars_read = read(fd, buf, BUFFER_SIZE);
	if ((!chars_read && !buf) || chars_read <= 0)
		return (NULL);
	while (1)
	{
		buf[chars_read] = '\0';
		tmp2 = ft_strjoin(temp, buf);
		if (temp)
			free(temp);
		if (ft_strchr(tmp2, '\n') != -1 || (!chars_read && tmp2))
			break ;
		//temp = ft_substr(tmp2, 0, ft_strlen(tmp2));
		chars_read = read(fd, buf, BUFFER_SIZE);
		if (chars_read == 0)
			break ;
	}
	return (tmp2);
}

char	*ft_line(char *temp)
{
	char	*line;
	int		index;

	if (!temp)
		return (NULL);
	index = ft_strchr(temp, '\n');
	if (index == 0)
	{
		line = ft_substr(temp, 0, index + 1);
	}
	else if (index != -1)
	{
		line = ft_substr(temp, 0, index + 1);
	}
	else
		line = ft_substr(temp, 0, ft_strlen(temp));
	return (line);
}

char	*ft_next(char *temp)
{
	char	*next;
	int		index;

	next = NULL;
	index = ft_strchr(temp, '\n');
	if (index != -1)
	{
		next = ft_substr(temp, index + 1, ft_strlen(temp));
	}
	return (next);
}

char	*get_next_line(int fd)
{
	char			*temp;
	char			*line;
	static char		*buf;

	if (fd < 0 || BUFFER_SIZE < 0)
		return (NULL);
	if (buf == NULL)
	{
		buf = (char *)malloc(BUFFER_SIZE * sizeof(char) + 1);
	}
	temp = ft_temp(fd, buf);
	line = ft_line(temp);
	free(buf);
	buf = ft_next(temp);
	free(temp);
	if (line == NULL)
		free(buf);
	return (line);
}
