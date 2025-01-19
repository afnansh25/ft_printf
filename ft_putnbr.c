/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashaheen <ashaheen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 18:48:20 by ashaheen          #+#    #+#             */
/*   Updated: 2025/01/15 18:55:42 by ashaheen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	c_counter;

	c_counter = 0;
	if (n == -2147483648)
	{
		c_counter += ft_putstr("-2147483648");
	}
	else if (n < 0)
	{
		c_counter += ft_putchar('-');
		n = -n;
		c_counter += ft_putnbr(n);
	}
	else if (n > 9)
	{
		c_counter += ft_putnbr(n / 10);
		c_counter += ft_putnbr(n % 10);
	}
	else
		c_counter += ft_putchar(n + 48);
	return (c_counter);
}

