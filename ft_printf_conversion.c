/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_conversion.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 17:49:38 by codespace         #+#    #+#             */
/*   Updated: 2024/10/06 11:22:29 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf_conversion(char specifire, va_list args)
{
    int p_count;
    
    p_count = 0;
    if(specifire == 'c')
        p_count += ft_putchar(va_arg(args, int));
    else if (specifire == 's')
        p_count += ft_putstr(va_arg(args, char*));
    else if (specifire == 'd' || specifire == 'i')
        p_count += ft_putnbr(va_arg(args, int));
    else if (specifire == 'p')
        p_count += ft_putptr(va_arg(args, void*));
    else if (specifire == 'x')
        p_count += ft_putnbr_hex_lower(va_arg(args, unsigned int));
    else if (specifire == 'X')
        p_count += ft_putnbr_hex_upper(va_arg(args, unsigned int));
    else if (specifire == 'u')
        p_count += ft_putnbr_unsigned(va_arg(args, unsigned int));
    else if (specifire == '%')
        p_count += ft_putchar('%');
}