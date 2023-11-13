/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damazzin <damazzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:25:41 by damazzin          #+#    #+#             */
/*   Updated: 2023/11/13 19:52:25 by damazzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#ifndef BUFF_SIZE
#define BUFF_SIZE 3
#endif

#include <fcntl.h>
#include <libc.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

size_t	ft_strlen(const char *str);
char	*ft_strjoin(char *s1, const char *s2);
int	ft_strchr(const char *s, int c);
char	*ft_cleaner(char *buf, int i);
char	*get_next_line(int fd);
char	*ft_temp(int fd, char *buf);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char *ft_next(char *temp);

#endif