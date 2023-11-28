/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-pper <ana-pper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 10:48:43 by ana-pper          #+#    #+#             */
/*   Updated: 2023/11/04 11:53:31 by ana-pper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		print_char(char c);
int		print_str(char *s);
int		print_int(int n);
int		print_unsigned(unsigned int n);
int		print_hex_min(unsigned int n);
int		print_hex_max(unsigned int n);
int		print_pointer(void *p);
int		print_hex_min_pointer(size_t n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_put_unsigned_nbr_fd(unsigned int n, int fd);
void	ft_putnbr_fd(int n, int fd);

#endif