/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 18:02:42 by ashaheen          #+#    #+#             */
/*   Updated: 2025/01/19 12:32:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	c_counter;

	c_counter = 0;
	if (str == NULL)
		str = "(null)";
	while (*str)
	{
		ft_putchar(*str);
		str++;
		c_counter++;
	}
	return (c_counter);
}
