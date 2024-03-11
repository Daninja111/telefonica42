/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damazzin <damazzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 18:22:58 by damazzin          #+#    #+#             */
/*   Updated: 2024/02/27 18:22:59 by damazzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include <unistd.h>

void ft_bin(char c, int pid) {
    int count = 0;

    while (count < 8) { // Process each of the 8 bits of the character
        // Determine the bit value at the current position by shifting
        // Shift 'c' right by (7 - cnt) to bring the desired bit to the LSB position
        // AND with 1 to isolate the LSB
        int bit = (c >> (7 - count)) & 1;

        if (bit) { // bit = 1
            kill(pid, SIGUSR1);
        } else { // bit = 0
            kill(pid, SIGUSR2);
        }

        count++;
        usleep(100);
    }
}
//atoi libft
int main(int argc, char *argv[]){
  char  *str;
  int pid;
  int count;

  if(argc == 3){
    count = 0;
    str = argv[2];
    pid = ft_atoi(argv[1]); // [0] file [1] PID [2] String
    if(!pid)
      return(1); // pid doesn't exist: some error
    while(str[count]){
      ft_bin(str[count], pid);//ft para enviar cada caracter y pid
      count++;
    }
    //ft_bin(flag, pid)enviar un digito para marcar el final
  }
  return(0);
}