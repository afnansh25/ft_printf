/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 17:28:03 by codespace         #+#    #+#             */
/*   Updated: 2024/10/06 11:20:56 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_PRINTF.H
# define FT_PRINTF.H
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int ft_printf_conversion(char specifire, va_list args);
int ft_putchar(char c);
int	ft_putnbr(int nb);
int	ft_putstr(char *str);
int ft_putptr(void *ptr);
int ft_putnbr_hex_lower(unsigned int num);
int ft_putnbr_hex_upper(unsigned int num);
int ft_putnbr_unsigned(unsigned long nb);

#endif