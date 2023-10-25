/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damazzin <damazzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 15:19:23 by damazzin          #+#    #+#             */
/*   Updated: 2023/05/12 15:39:57 by damazzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	*is_char_find;

	p = (unsigned char *)s;
	is_char_find = NULL;
	while (n--)
	{
		if (*p != (unsigned char)c)
		{
			p++;
		}
		else
		{
			is_char_find = p;
			break ;
		}
	}
	return (is_char_find);
}
