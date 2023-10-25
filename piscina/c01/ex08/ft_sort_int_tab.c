/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damazzin <damazzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:48:14 by damazzin          #+#    #+#             */
/*   Updated: 2023/03/21 17:58:59 by damazzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	sw;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				sw = tab[i];
				tab[i] = tab[j];
				tab[j] = sw;
			}
			j++;
		}
		i++;
	}
}

/*int main(void)
{
    int	tab[] = {8, 1, 2, 7};
	int size = 4;
	ft_sort_in_tab(tab, size);
	int x = 0;
	while (x < 4)
	{
		//printf("%d", tab[x]);
		x++;
	}
	return (0);
}*/