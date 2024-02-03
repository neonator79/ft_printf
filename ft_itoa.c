/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysitkevi <ysitkevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 16:11:04 by ysitkevi          #+#    #+#             */
/*   Updated: 2024/01/13 14:31:19 by ysitkevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

static int	digits(int n)
{
	int	counter;

	counter = 0;
	if (n < 0)
	{
		n = -n;
		counter++;
	}
	while (n)
	{
		n /= 10;
		counter++;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		char_count;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	char_count = digits(n);
	s = malloc(sizeof(char) * (char_count + 1));
	if (s == NULL)
		return (NULL);
	s[char_count] = '\0';
	if (n < 0)
	{
		s[0] = '-';
		n = -n;
	}
	while (char_count && n)
	{
		s[char_count - 1] = n % 10 + '0';
		n /= 10;
		char_count--;
	}
	return (s);
}
