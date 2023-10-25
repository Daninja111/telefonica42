/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damazzin <damazzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 20:20:53 by damazzin          #+#    #+#             */
/*   Updated: 2023/06/02 13:19:13 by damazzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	p = (unsigned char *)b;
	while (len > i)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

/*int	main(void)
{
	char	str[] = "Holasa";

	ft_memset(str, '7', 4);
	printf("%s", str);
	return (0);
}*/