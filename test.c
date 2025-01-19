/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 16:29:51 by ashaheen          #+#    #+#             */
/*   Updated: 2025/01/19 12:22:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	//char	*str = "AFNAN";

	printf("Original: My name is %c, Iam %i years old\n", 'A', 22);
	ft_printf("My printf: My name is %c, Iam %i years old\n", 'A', 22);

	return (0);
}