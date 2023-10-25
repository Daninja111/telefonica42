/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damazzin <damazzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 17:43:13 by damazzin          #+#    #+#             */
/*   Updated: 2023/06/30 16:18:14 by damazzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_count_digits(int c)
{
	int	i;

	i = 1;
	if (c == -2147483648)
		i += 9;
	else if (c < 0)
		c = c * -1;
	while (c > 9)
	{
		c /= 10;
		i++;
	}
	return (i);
}

int	ft_print_int(int c)
{
	int	length;

	ft_putnbr(c);
	if (c < 0)
		length = ft_count_digits(c) + 1;
	else
		length = ft_count_digits(c);
	return (length);
}
