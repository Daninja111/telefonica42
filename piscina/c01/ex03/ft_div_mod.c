/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damazzin <damazzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 14:18:35 by damazzin          #+#    #+#             */
/*   Updated: 2023/03/17 14:22:53 by damazzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main()
{
	int a = 10;
	int b = 4;
	int div;
	int mod;

	ft_div_mod(a, b, &div, &mod);
	printf("%d\n", div);
	printf("%d", mod);
}*/