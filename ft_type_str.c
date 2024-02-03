/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysitkevi <ysitkevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 18:01:01 by ysitkevi          #+#    #+#             */
/*   Updated: 2024/01/12 20:23:59 by ysitkevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include "../include/libft.h"

int	ft_type_str(char *s)
{
	int	count;

	count = 0;
	if (!s)
	{
		s = "(null)";
	}
	count = ft_putstr_len(s);
	return (count);
}
