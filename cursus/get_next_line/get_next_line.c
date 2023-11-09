/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damazzin <damazzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:12:07 by damazzin          #+#    #+#             */
/*   Updated: 2023/11/09 13:10:52 by damazzin         ###   ########.fr       */
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

char	*ft_cleaner(char *buf, int i)
{
	char *clean;
	int j;
	j = 0;

	clean = (char*) malloc(100*sizeof(char));
	while(buf[i + j] != '\0')
    {
        clean[j] = buf[i + j];
        j++;
    }
	printf("Cleaner -> %s \n", clean);
	return(clean);
}

char	*get_next_line(int fd)
{
	static char	*buf;
	int		chars_read;
	char	*temp;
	char	*temp2;
	int		i;

	temp = "\0";
	if(buf == NULL)
		buf = (char*) malloc(100*sizeof(char));
	else
		temp = buf;
	printf("¿Y a la vuelta? > %s\n", buf);
//	temp2 = "\0";
    i = 0;
	//fd = open("file.txt", O_RDONLY);
	while ((chars_read = read(fd, buf, 5)))
	{
		//buf[chars_read] = '\0';
		if (ft_strchr(buf, '\n') == NULL)
		{
			temp = ft_strjoin(temp, buf);
			printf("Iteración %d > %s\n", i + 1, temp);
			i++;
		}
		else
			break ;
	}
	//Al hacer otra llamada se sobreescribe el buf 
	//printf("conta -> %d", i);
	temp2 = strndup(buf, i);
	temp = ft_strjoin(temp, temp2);
	//printf("temp final > %s\n", temp);
	printf("buf > %s\n", buf);
	buf = ft_cleaner(buf, i + 1);
	printf("¿Que hay? > %s\n", buf);
    return(temp);
}
