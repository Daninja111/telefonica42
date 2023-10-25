/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damazzin <damazzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 15:41:55 by damazzin          #+#    #+#             */
/*   Updated: 2023/07/12 11:38:02 by damazzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_unsigned(unsigned int c)
{
	if (c / 10 != 0)
	{
		ft_putnbr_unsigned(c / 10);
		ft_putchar(c % 10 + '0');
	}
	if (c <= 9 && c >= 0)
	{
		ft_putchar(c + '0');
	}
}

int	ft_count_unsigned(unsigned int c)
{
	unsigned int	i;

	i = 1;
	while (c > 9)
	{
		c /= 10;
		i++;
	}
	return (i);
}

int	ft_print_unsigned(unsigned int c)
{
	int				length;

	ft_putnbr_unsigned(c);
	length = ft_count_unsigned(c);
	return (length);
}
