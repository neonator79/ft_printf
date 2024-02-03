/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_uint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysitkevi <ysitkevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 18:01:13 by ysitkevi          #+#    #+#             */
/*   Updated: 2024/01/12 20:28:56 by ysitkevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include "../include/libft.h"

int	ft_num_len(unsigned int number)
{
	int	count;

	count = 0;
	while (number != 0)
	{
		count++;
		number = number / 10;
	}
	return (count);
}

char	*ft_uitoa(unsigned int c)
{
	char	*num;
	int		len;

	len = ft_num_len(c);
	num = (char *)malloc(sizeof(char) * (len + 1));
	if (!num)
	{
		return (0);
	}
	num[len] = '\0';
	while (c != 0)
	{
		num[len - 1] = c % 10 + '0';
		c = c / 10;
		len--;
	}
	return (num);
}

int	ft_type_uint(unsigned int c)
{
	int		count;
	char	*num;

	count = 0;
	if (c == 0)
	{
		count += write (1, "0", 1);
	}
	else
	{
		num = ft_uitoa(c);
		count += ft_type_str(num);
		free(num);
	}
	return (count);
}
