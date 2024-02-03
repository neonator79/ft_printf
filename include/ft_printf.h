/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysitkevi <ysitkevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 19:07:25 by ysitkevi          #+#    #+#             */
/*   Updated: 2024/01/12 19:09:43 by ysitkevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdint.h>
# include <stdlib.h>

int	ft_printf(char const *format, ...);
int	ft_putchar(char c);
int	ft_type_str(char *s);
int	ft_type_char(char c);
int	ft_type_int(int c);
int	ft_type_pointer(unsigned long long ptr);
int	ft_type_uint(unsigned int c);
int	ft_type_hex(unsigned int num, char format);
int	ft_convers(va_list args, const char format);
int	ft_putstr_len(char *s);

#endif