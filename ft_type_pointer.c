/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_pointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysitkevi <ysitkevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 18:00:52 by ysitkevi          #+#    #+#             */
/*   Updated: 2024/01/12 20:21:32 by ysitkevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include "../include/libft.h"

int	ft_pointer_len(unsigned long long ptr)
{
	int	len;

	len = 0;
	while (ptr != 0)
	{
		len++;
		ptr /= 16;
	}
	return (len);
}

int	ft_put_ptr(unsigned long long ptr)
{
	if (ptr >= 16)
	{
		ft_put_ptr(ptr / 16);
		ft_put_ptr(ptr % 16);
	}
	else
	{
		if (ptr <= 9)
			ft_putchar(ptr + 48);
		else
			ft_putchar(ptr - 10 + 'a');
	}
	return (ft_pointer_len(ptr));
}

int	ft_type_pointer(unsigned long long ptr)
{
	int	count;

	count = 0;
	count += write(1, "0x", 2);
	if (ptr == 0)
	{
		count += write (1, "0", 1);
	}
	else
	{
		ft_put_ptr(ptr);
		count += ft_pointer_len(ptr);
	}
	return (count);
}
