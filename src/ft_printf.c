/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysitkevi <ysitkevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 17:55:44 by ysitkevi          #+#    #+#             */
/*   Updated: 2024/01/12 19:59:43 by ysitkevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printf(char const *format, ...)
{
	va_list	args;
	int		index;
	int		count;

	if (!format)
		return (-1);
	index = 0;
	count = 0;
	va_start(args, format);
	while (format[index])
	{
		if (format[index] == '%')
		{
			count += ft_convers(args, format[index + 1]);
			index++;
		}
		else
			count += ft_putchar(format[index]);
		index++;
	}
	va_end(args);
	return (count);
}
