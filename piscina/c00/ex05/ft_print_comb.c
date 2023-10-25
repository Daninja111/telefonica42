/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damazzin <damazzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 18:24:44 by damazzin          #+#    #+#             */
/*   Updated: 2023/03/16 19:39:50 by damazzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_char(int c, int d, int u)
{
	if (c != d && d != u && c != u)
	{
		write(1, &c, 1);
		write(1, &d, 1);
		write(1, &u, 1);
		if (!(c == '7' && d == '8' && u == '9'))
		{
			write(1, ", ", 2);
		}
		else
		{
		}
	}
}

void	ft_print_comb(void)
{
	int	c;
	int	d;
	int	u;

	c = '0';
	while (c <= '7')
	{
		d = c + 1;
		while (d <= '8')
		{
			u = d + 1;
			while (u <= '9')
			{
				ft_print_char(c, d, u);
				u++;
			}
			d++;
		}
		c++;
	}
}

/*int	main(void)
{
	ft_print_comb();
	return (0);
}*/
