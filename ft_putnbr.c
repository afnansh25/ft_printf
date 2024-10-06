/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 17:59:05 by codespace         #+#    #+#             */
/*   Updated: 2024/10/06 10:00:03 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	int	p_count;
	
	p_count = 0;
	if (nb == -2147483648)
	{
		p_count += ft_putstr("-2147483648");
	}
	else if (nb < 0)
	{
		p_count += ft_putchar('-');
		nb = -nb;
		p_count += ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		p_count += ft_putnbr(nb / 10);
		p_count += ft_putnbr(nb % 10);
	}
	else
	{
		p_count += ft_putchar(nb + 48);
	}
	return (p_count);
}
