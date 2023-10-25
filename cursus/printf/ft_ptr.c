/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damazzin <damazzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 13:58:37 by damazzin          #+#    #+#             */
/*   Updated: 2023/07/12 12:40:35 by damazzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_count_ptr(unsigned long int num)
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

int	ft_print_ptr(unsigned long int num)
{
	char	*hex;
	int		count_digits;

	count_digits = ft_count_ptr(num);
	hex = "0123456789abcdef";
	if (num == 0)
		write(1, &hex[0], 1);
	else if (num >= 16)
	{
		ft_print_ptr(num / 16);
		ft_print_ptr(num % 16);
	}
	else
		write(1, &hex[num], 1);
	return (count_digits);
}

int	ft_ptr(unsigned long int ptr)
{
	int	i;

	i = 0;
	ft_putstr("0x");
	i += ft_print_ptr(ptr);
	return (i + 2);
}
