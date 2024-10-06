/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 18:01:09 by codespace         #+#    #+#             */
/*   Updated: 2024/10/06 10:08:04 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	p_count;

	p_count = 0;
	if(!str)
		str = "(null)";
	while (*str != '\0')
	{
		p_count += ft_putchar(*str);
		str++;
	}
	return (p_count);
}