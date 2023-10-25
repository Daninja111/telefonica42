/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damazzin <damazzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 15:33:26 by damazzin          #+#    #+#             */
/*   Updated: 2023/03/30 20:23:13 by damazzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
    if (nb == -2147483647)
    {
        write(1, "-2147483647", 11);
        return ;
    }
	if (nb < 0)
	{
		ft_putchar('-');
        nb = nb * -1;
	}
	if ( nb > 9)
    {
		ft_putnbr(nb / 10);
        nb %= 10;
	}
    ft_putchar(nb + '0');
}

/*int	main(void)
{
	ft_putnbr(-214748);
	return (0);
}*/