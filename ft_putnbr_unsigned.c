/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 11:14:44 by codespace         #+#    #+#             */
/*   Updated: 2024/10/06 11:17:44 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr_unsigned(unsigned long nb)
{
    int p_count;

    p_count = 0;
    if (nb > 9)
		p_count += ft_putnbr_unsigned(nb / 10);
	p_count += ft_putchar((nb % 10) + 48);
	return (p_count);
}