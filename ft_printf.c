/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 17:28:57 by ashaheen          #+#    #+#             */
/*   Updated: 2025/01/19 13:04:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		c_counter;

	va_start(args, format);
	c_counter = 0;
	while (*format)
	{
		if (*format == '%' && (*(format + 1)) != '\0')
		{
			format++;
			c_counter += ft_printf_conversion(*format, args);
			if (c_counter == -1)
				{
					va_end(args);
					return (-1);
				}
		}
		else
		{
			c_counter += ft_putchar(*format);
			if (c_counter == -1)
				{
					va_end(args);
					return (-1);
				}
		}
		format++;
	}
	va_end(args);
	return (c_counter);
}
