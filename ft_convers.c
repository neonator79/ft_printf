/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysitkevi <ysitkevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 17:55:34 by ysitkevi          #+#    #+#             */
/*   Updated: 2024/01/12 19:19:40 by ysitkevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_convers(va_list args, const char format)
{
	if (format == 'c')
		return (ft_type_char(va_arg(args, int)));
	else if (format == 's')
		return (ft_type_str(va_arg(args, char *)));
	else if (format == 'p')
		return (ft_type_pointer(va_arg(args, unsigned long long)));
	else if (format == 'd' || format == 'i')
		return (ft_type_int(va_arg(args, int)));
	else if (format == 'u')
		return (ft_type_uint((unsigned int)va_arg(args, unsigned int)));
	else if (format == 'x' || format == 'X')
		return (ft_type_hex(va_arg(args, unsigned int), format));
	else if (format == '%')
		return (ft_putchar('%'));
	return (0);
}
