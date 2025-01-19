/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_conversion.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashaheen <ashaheen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 17:45:55 by ashaheen          #+#    #+#             */
/*   Updated: 2025/01/18 16:10:14 by ashaheen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_conversion(char specifire, va_list args)
{
	int	c_counter;

	c_counter = 0;
	if (specifire == '%')
		c_counter += ft_putchar('%');
	else if (specifire == 'c')
		c_counter += ft_putchar(va_arg(args, int));
	else if (specifire == 's')
		c_counter += ft_putstr(va_arg(args, char *));
	else if (specifire == 'i' || specifire == 'd')
		c_counter += ft_putnbr(va_arg(args, int));
	else if (specifire == 'u')
		c_counter += ft_putnbr_unsigned(va_arg(args, unsigned int));
	else if (specifire == 'x')
		c_counter += ft_putnbr_hex_lower(va_arg(args, unsigned int));
	else if (specifire == 'X')
		c_counter += ft_putnbr_hex_upper(va_arg(args, unsigned int));
	else if (specifire == 'p')
		c_counter += ft_putptr(va_arg(args, void *));
	return (c_counter);
}
