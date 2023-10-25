/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damazzin <damazzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 15:35:30 by damazzin          #+#    #+#             */
/*   Updated: 2023/07/12 12:21:33 by damazzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_count_hex(unsigned int num)
{
	int	i;

	i = 0;
	if (num == 0)
		return (1);
	while (num != 0)
	{
		num /= 16;
		i++;
	}
	return (i);
}

int	ft_print_hex(char c, unsigned int num)
{
	char	*hex;
	int		count_digits;

	count_digits = ft_count_hex(num);
	if (c == 'x')
		hex = "0123456789abcdef";
	else if (c == 'X')
		hex = "0123456789ABCDEF";
	if (num == 0)
		write(1, &hex[0], 1);
	else if (num >= 16)
	{
		ft_print_hex(c, num / 16);
		ft_print_hex(c, num % 16);
	}
	else
		write(1, &hex[num], 1);
	return (count_digits);
}
