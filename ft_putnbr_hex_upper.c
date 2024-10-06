/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex_upper.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 10:24:26 by codespace         #+#    #+#             */
/*   Updated: 2024/10/06 10:58:07 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr_hex_upper(unsigned int num)
{
    char *hexdigit = "0123456789ABCDEF";
    int p_count;

    p_count = 0;
    if (num > 16)
        p_count += ft_putnbr_hex_upper(num / 16);
    p_count += ft_putchar(hexdigit[num % 16]);
    return (p_count);
}