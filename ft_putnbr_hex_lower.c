/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex_lower.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashaheen <ashaheen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 19:24:04 by ashaheen          #+#    #+#             */
/*   Updated: 2025/01/18 19:16:50 by ashaheen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hex_lower(unsigned long long n)
{
	char	*hexadigit;
	int		c_counter;

	hexadigit = "0123456789abcdef";
	c_counter = 0;
	if (n >= 16)
		c_counter += ft_putnbr_hex_lower(n / 16);
	c_counter += ft_putchar(hexadigit[n % 16]);
	return (c_counter);
}
