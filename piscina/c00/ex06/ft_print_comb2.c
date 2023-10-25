/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damazzin <damazzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 13:19:29 by damazzin          #+#    #+#             */
/*   Updated: 2023/03/14 17:06:54 by damazzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_filter(int j, int k)
{
	if (j != k)
	{
		ft_putchar(j / 10 + '0');
		ft_putchar(j % 10 + '0');
		write(1, " ", 1);
		ft_putchar(k / 10 + '0');
		ft_putchar(k % 10 + '0');
		if (!(k == 99 && j == 98))
		{
			write(1, ", ", 1);
			write(1, " ", 1);
		}
	}
}

void	ft_print_comb2(void)
{
	int	j;
	int	k;

	j = 0;
	while (j <= 99)
	{
		k = j + 1;
		while (k <= 99)
		{
			ft_print_filter(j, k);
			k++;
		}
		j++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
