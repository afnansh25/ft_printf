/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 11:07:01 by codespace         #+#    #+#             */
/*   Updated: 2024/10/06 11:13:26 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putptr(void *ptr)
{
    int p_count;

    p_count = 0;
    p_count += ft_putstr("0x");
    p_count += ft_putnbr_hex_lower((unsigned long)ptr);
    return (p_count);
}