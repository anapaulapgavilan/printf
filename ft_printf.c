/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-pper <ana-pper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:25:57 by ana-pper          #+#    #+#             */
/*   Updated: 2023/11/04 13:00:38 by ana-pper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_format(char specifier, va_list	ap)
{	
	if (specifier == 'c')
		return (print_char (va_arg(ap, int)));
	else if (specifier == 's')
		return (print_str (va_arg(ap, char *)));
	else if (specifier == 'i')
		return (print_int (va_arg(ap, int)));
	else if (specifier == 'd')
		return (print_int (va_arg(ap, int)));
	else if (specifier == 'p')
		return (print_pointer (va_arg(ap, void *)));
	else if (specifier == 'u')
		return (print_unsigned (va_arg(ap, unsigned int)));
	else if (specifier == 'x')
		return (print_hex_min (va_arg(ap, int)));
	else if (specifier == 'X')
		return (print_hex_max (va_arg(ap, int)));
	else
		write (1, &specifier, 1);
	return (0);
}

int	ft_printf(char const *format, ...)
{
	va_list	ap;
	int		i;
	char	c;

	va_start(ap, format);
	i = 0;
	c = '%';
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
				i += write(1, &c, 1);
			else if (*format == 'n' && format[-1] == '\\')
				i += write(1, "\n", 1);
			else
				i += print_format(*format, ap);
		}
		else
			i += write(1, format, 1);
		format++;
	}
	va_end(ap);
	return (i);
}

/*
int	main(void)
{
	ft_printf("%%\n");
	ft_printf("%c\n", 'a');
	ft_printf("%x\n", 45678);
	ft_printf("%s\n", "Hello, world!");
	
	return (0);
}
*/