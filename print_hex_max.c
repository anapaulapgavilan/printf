/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex_max.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-pper <ana-pper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:36:55 by ana-pper          #+#    #+#             */
/*   Updated: 2023/11/04 11:43:41 by ana-pper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex_max(unsigned int n)
{
	char		*base;
	int			i;

	base = "0123456789ABCDEF";
	i = 0;
	if (n == 0)
	{
		write(1, &base[0], 1);
		return (1);
	}
	else if (n > 15)
	{
		i = i + print_hex_max(n / 16);
	}
	write(1, &base[n % 16], 1);
	i++;
	return (i);
}

/*
int main(void)
{
	size_t n = 15678787;
    int i = print_hex_max(n);
    printf("i = %d\n", i);
	return (0);
}
*/