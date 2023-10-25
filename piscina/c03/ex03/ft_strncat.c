/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damazzin <damazzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 15:15:00 by damazzin          #+#    #+#             */
/*   Updated: 2023/03/27 18:27:39 by damazzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0' && i < nb)
	{
	i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		while (j < nb)
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		j++;
	}
	if (dest[i] != '\0')
	{
		dest[i] = '\0';
	}
	return (dest);
}

/*int main()
{
    char    dest[22] = "H";
	char    src[20] = "olanda";
    unsigned nb;

    nb = 4;
    printf("%s", ft_strncat(dest, src, nb));
	return (0);
}*/