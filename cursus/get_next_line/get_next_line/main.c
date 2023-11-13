/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damazzin <damazzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:12:37 by damazzin          #+#    #+#             */
/*   Updated: 2023/11/13 19:07:45 by damazzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int main(void)
{
//    static char	*buf;
    char *res;
    char *res1;
    
    int fd;

    fd = open("file.txt", O_RDONLY);
    res = get_next_line(fd);
    printf("Return 1 > %s\n", res);
   res1 = get_next_line(fd);
   printf("Return 2 > %s\n", res1);
}
