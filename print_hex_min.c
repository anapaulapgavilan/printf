/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex_min.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-pper <ana-pper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:29:28 by ana-pper          #+#    #+#             */
/*   Updated: 2023/11/04 11:43:39 by ana-pper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex_min(unsigned int n)
{
	char		*base;
	int			i;

	base = "0123456789abcdef";
	i = 0;
	if (n == 0)
	{
		write(1, &base[0], 1);
		return (1);
	}
	else if (n > 15)
	{
		i = i + print_hex_min(n / 16);
	}
	write(1, &base[n % 16], 1);
	i++;
	return (i);
}

/*
int main(void)
{
	unsigned int n = -1;
  	print_hex_min(n);
    printf("\n%x\n", n);
	return (0);
}
*/