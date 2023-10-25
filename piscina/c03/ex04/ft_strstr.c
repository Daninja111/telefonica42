/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damazzin <damazzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 16:48:03 by damazzin          #+#    #+#             */
/*   Updated: 2023/03/27 18:27:52 by damazzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
		{
			j++;
			if (str[i + j] == '\0')
			{
				return (str + i);
			}
		}
		i++;
	}
	return (0);
}

/*int main()
{
    char    str[] = "Hola";
    char    to_find[] = "";
   
    printf("%s", ft_strstr(str, to_find));
    return (0);
}*/