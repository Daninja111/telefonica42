/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damazzin <damazzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:01:39 by damazzin          #+#    #+#             */
/*   Updated: 2023/10/26 13:08:00 by damazzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <libc.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

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

char	*ft_strjoin(const char *s1, const char *s2)
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

int	main(void)
{
	int		fd;
	char	*buf;
	int		chars_read;
	char	*temp;
	char	*temp2;
	int		i;

	temp = "\0";
	fd = open("file.txt", O_RDONLY);
	while ((chars_read = read(fd, buf, 5)))
	{
		buf[chars_read] = '\0';
		if (ft_strchr(buf, '\n') == NULL)
		{
			temp = ft_strjoin(temp, buf);
			printf("temp > %s\n", temp);
			i++;
		}
		else
			//printf("remanente -> %s", buf);
			break ;
	}
	//printf("conta -> %d", i);
	temp2 = strndup(buf, i);
	temp = ft_strjoin(temp, temp2);
	printf("temp final > %s\n", temp);
	printf("buf > %c\n", buf[i + 1]);
}
