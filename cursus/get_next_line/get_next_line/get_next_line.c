/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damazzin <damazzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:12:07 by damazzin          #+#    #+#             */
/*   Updated: 2023/11/13 19:51:21 by damazzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(char *s1, const char *s2)
{
	char	*new_str;
	int		i;
	int		j;

	new_str = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1)
			* sizeof(char));
	if (!new_str)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		new_str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		new_str[i + j] = s2[j];
		j++;
	}
	new_str[i + j] = '\0';
	return (new_str);
}

int	ft_strchr(const char *s, int c)
{
	char	*str;
	int	i;
	
	
	i = 0;
	str = (char *)s;
	while (*str != (char)c)
	{
		if (*str == '\0')
			return (-1);
		str++;
		i++;
	}
	return (i);
}

char	*ft_cleaner(char *buf, int i)
{
	char	*clean;
	int		j;

	j = 0;
	clean = (char *)malloc(100 * sizeof(char));
	while (buf[i + j] != '\0')
	{
		clean[j] = buf[i + j];
		j++;
	}
	printf("Cleaner -> %s \n", clean);
	return (clean);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dst_size)
{
	size_t	i;

	i = 0;
	if (dst_size > 0)
	{
		while (src[i] != '\0' && i < dst_size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

char	*ft_strdup(const char *src)
{
	char	*dst;
	int		i;

	dst = malloc(ft_strlen(src) + 1);
	if (dst == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

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

char	*ft_temp(int fd, char *buf)
{
	int		chars_read;
	char	*temp;
	int		i;

	if(*buf)
	{
		printf("Buffer %s\n", buf);
		temp = ft_substr(buf, 0, ft_strlen(buf));
	}
	else
		temp = "\0";
	i = 0;
	while ((chars_read = read(fd, buf, BUFF_SIZE)))
	{
		buf[chars_read] = '\0';
		temp = ft_strjoin(temp, buf);
		i++;
		if (ft_strchr(temp, '\n') != -1)
			break ;
	}
	return (temp);
}

char *ft_line(char *temp)
{
	char *line;
	int	index;
	
	index = ft_strchr(temp, '\n');
	if(index != -1)
	{
		line = ft_substr(temp, 0, index);
	}
	else
		line = ft_substr(temp, 0, ft_strlen(temp));
	return (line);
}

char *ft_next(char *temp)
{
	char *next;
	int	index;
	
	index = ft_strchr(temp, '\n');
	if(index != -1)
	{
		next = ft_substr(temp, index + 1, ft_strlen(temp));
	}
	return (next);
}

int ft_static(char *next)
{
	int	index;

	if(!next || next == NULL)
		return (0);
	index = ft_strchr(next, '\n');
	if(index != -1)
	{
		return(1);
	}
	else
	{
		return(-1);
	}
}
char	*get_next_line(int fd)
{
	char		*temp;
	char		*line;
    static char	*buf;

	if (buf == NULL)
	{
		buf = (char *)malloc(BUFF_SIZE * sizeof(char));
	}

/*	else
		if(ft_static(buf) != 0)
		{
			line = ft_line(buf);
			if (ft_strchr(line, '\n') != -1)
			{
				buf = ft_next(buf);
				return (line);
			}
			else
			{
				
			}
		}*/
	temp = ft_temp(fd, buf);
	line = ft_line(temp);
	buf = ft_next(temp);
	printf("Line > %s\n", line);
	printf("Temp > %s\n", temp);
	printf("Next > %s\n", buf);
	return (line);
}

/*
	//printf("conta -> %d\n", i);
	temp2 = strndup(buf, i);
	if (*temp2 == '\n')
		*temp2 = '\0';
	temp = ft_strjoin(temp, temp2);*/