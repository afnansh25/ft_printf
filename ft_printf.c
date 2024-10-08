/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 17:32:45 by codespace         #+#    #+#             */
/*   Updated: 2024/10/06 11:20:38 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
    va_list args;
    int p_count;

    va_start(args, format);
    p_count = 0;
    while (*format)
    {
        if(*format == '%' && (*(format + 1) != '\0'))
        {
            format++;
            p_count += ft_printf_conversion(*format, args); 
        }
        else
        {
            write(1, format, 1);
            p_count++;
        }
    }
    va_end(args);
    return(p_count);
}
