/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-pper <ana-pper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:34:02 by ana-pper          #+#    #+#             */
/*   Updated: 2023/11/01 15:04:25 by ana-pper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int	print_char(char c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

/*
int main (void)
{
	char i;

	i = 'c';

	print_char(i);
}
*/