/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysitkevi <ysitkevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 18:00:07 by ysitkevi          #+#    #+#             */
/*   Updated: 2024/01/12 20:15:37 by ysitkevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include "../include/libft.h"

int	ft_type_int(int c)
{
	int		count;
	char	*num;

	count = 0;
	num = ft_itoa(c);
	count = ft_type_str(num);
	free(num);
	return (count);
}
