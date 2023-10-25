/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damazzin <damazzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:39:43 by damazzin          #+#    #+#             */
/*   Updated: 2023/07/12 12:41:29 by damazzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(char const *format, ...);
int		ft_print_char(int c);
int		ft_print_str(char *str);
int		ft_print_int(int c);
int		ft_print_unsigned(unsigned int c);
int		ft_print_hex(char c, unsigned int num);
int		ft_ptr(unsigned long int ptr);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);

#endif