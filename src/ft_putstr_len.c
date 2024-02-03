/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_len.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysitkevi <ysitkevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 17:55:54 by ysitkevi          #+#    #+#             */
/*   Updated: 2024/01/12 20:02:47 by ysitkevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_putstr_len(char *s)
{
	int	count;

	count = 0;
	while (s[count])
	{
		ft_putchar(s[count++]);
	}
	return (count);
}
