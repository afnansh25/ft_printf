/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashaheen <ashaheen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 19:38:41 by ashaheen          #+#    #+#             */
/*   Updated: 2025/01/18 19:23:27 by ashaheen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	int	c_counter;

	if (ptr == NULL)
		return (ft_putstr("(nil)"));
	c_counter = 0;
	c_counter += ft_putstr("0x");
	c_counter += ft_putnbr_hex_lower((unsigned long)ptr);
	return (c_counter);
}
