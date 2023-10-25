/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damazzin <damazzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 11:48:11 by damazzin          #+#    #+#             */
/*   Updated: 2023/03/30 14:51:30 by damazzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_rules(char *str, int i)
{
	if (str[i] > 96 && str[i] < 123)
	{
		if (!(str[i - 1] > 96 && str[i - 1] < 123))
		{
			if (!(str[i - 1] > 47 && str[i - 1] < 58))
			{
				if (!(str[i - 1] > 64 && str[i - 1] < 91))
				{
					str[i] -= 32;
				}
			}
		}
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[0] > 96 && str[0] < 123)
		{
			str[i] -= 32;
		}
		else if (i > 0)
		{
			ft_rules(str, i);
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
    char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    printf("%s", ft_strcapitalize(str));
    return (0);
}*/