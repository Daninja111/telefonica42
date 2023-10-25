/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damazzin <damazzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:22:29 by damazzin          #+#    #+#             */
/*   Updated: 2023/03/21 17:48:21 by damazzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	rev;

	i = 0;
	while (i < size / 2)
	{
		rev = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = rev;
		i++;
	}
}

/*int main(void)
{
    int	tab[] = {1, 3, 2, 7};
	int size = 4;
	ft_rev_int_tab(tab, size);
	int x = 0;
	while (x < 4)
	{
		printf("%d", tab[x]);
		x++;
	}
	return (0);
}*/