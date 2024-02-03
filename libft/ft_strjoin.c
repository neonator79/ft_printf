/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysitkevi <ysitkevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 12:12:43 by ysitkevi          #+#    #+#             */
/*   Updated: 2024/01/13 14:32:12 by ysitkevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	size_t	len_s3;
	char	*s3;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	len_s3 = len_s1 + len_s2;
	s3 = (char *)malloc(len_s3 + 1);
	if (s3)
	{
		ft_memcpy(s3, s1, len_s1);
		ft_memcpy(s3 + len_s1, s2, len_s2);
		s3[len_s3] = '\0';
		return (s3);
	}
	return (NULL);
}
