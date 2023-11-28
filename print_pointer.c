/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-pper <ana-pper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:04:13 by ana-pper          #+#    #+#             */
/*   Updated: 2023/11/04 11:44:27 by ana-pper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex_min_pointer(size_t n)
{
	char	*base;
	int		i;
	char	c;

	base = "0123456789abcdef";
	i = 0;
	if (n == 0)
	{
		c = base[0];
		write(1, &c, 1);
		return (1);
	}
	else if (n > 15)
	{
		i = i + print_hex_min_pointer(n / 16);
	}
	write(1, &base[n % 16], 1);
	i++;
	return (i);
}

int	print_pointer(void *p)
{
	size_t	entero;
	int		i;

	entero = (size_t)p;
	write(1, "0x", 2);
	i = print_hex_min_pointer(entero) + 2;
	return (i);
}

/*
int main()
{
    int n = 89123456;
    int *p = &n;
	printf("%p\n", p);
    print_pointer(p);
	
	return (0);
}
*/