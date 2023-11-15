/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damazzin <damazzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:12:37 by damazzin          #+#    #+#             */
/*   Updated: 2023/11/15 20:53:23 by damazzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int main(void)
{
    char *str;
    char *str1;
    int fd;

    fd = open("file.txt", O_RDONLY);
    str = get_next_line(fd);
    str1 = get_next_line(fd);
    printf("Return 1 > %s\n", str);
    printf("Return 2 > %s\n", str1);
}
