/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damazzin <damazzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 16:12:36 by damazzin          #+#    #+#             */
/*   Updated: 2023/06/07 15:14:50 by damazzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	size_in_bytes;

	size_in_bytes = count * size;
	p = malloc(size_in_bytes);
	if (p != NULL)
	{
		ft_memset(p, 0, size_in_bytes);
	}
	return (p);
}
