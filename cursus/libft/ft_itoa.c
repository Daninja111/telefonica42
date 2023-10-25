/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damazzin <damazzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 14:46:08 by damazzin          #+#    #+#             */
/*   Updated: 2023/06/07 15:08:45 by damazzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_digits(int n)
{
	if (n == -2147483648)
		return (11);
	else if (n < 0)
		return (ft_count_digits(n * (-1)) + 1);
	else if (n < 10)
		return (1);
	else
		return (ft_count_digits(n / 10) + 1);
}

static void	ft_write_char(char *str, int size, long int num)
{
	str[size] = '\0';
	if (num < 0)
	{
		str[0] = '-';
		num *= -1;
		while (size > 1)
		{
			str[size - 1] = num % 10 + '0';
			num = num / 10;
			size--;
		}
	}
	else
	{
		while (size > 0)
		{
			str[size - 1] = num % 10 + '0';
			num = num / 10;
			size--;
		}
	}
}

char	*ft_itoa(int n)
{
	int			size;
	char		*str;
	long int	num;

	size = ft_count_digits(n);
	str = (char *)ft_calloc((size + 1), sizeof(char));
	if (!str)
		return (NULL);
	num = (long int)n;
	ft_write_char(str, size, num);
	return (str);
	free(str);
}

/*int	main(void)
{
	int n;

	n = 4739574;
	char	*res = ft_itoa(n);

	printf("Resultado: %s", res);
	printf("Cantidad de digitos: %d", ft_count_digits(n));
	free(res);
	return (0);
}*/