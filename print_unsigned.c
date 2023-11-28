/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-pper <ana-pper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:59:56 by ana-pper          #+#    #+#             */
/*   Updated: 2023/11/04 11:43:42 by ana-pper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_unsigned_nbr_fd(unsigned int n, int fd)
{
	if (n < 0)
	{
		n = n * (-1);
		write (fd, "-", 1);
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	ft_putchar_fd((n % 10) + '0', fd);
}

int	print_unsigned(unsigned int n)
{
	int				i;
	unsigned int	nb;

	nb = n;
	i = 1;
	while (nb > 9)
	{
		nb = nb / 10;
		i++;
	}
	ft_put_unsigned_nbr_fd(n, 1);
	if (n == 0)
		return (1);
	return (i);
}

/*
int main (void)
{
	unsigned int i;

	i = 12345678;
	print_unsigned(i);
}
*/