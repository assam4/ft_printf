/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saslanya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 22:47:43 by saslanya          #+#    #+#             */
/*   Updated: 2025/01/23 22:47:46 by saslanya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>

int	print_string(const char *str, int fd);
int	print_convert_number(unsigned int num, const char *base, int fd);
int	print_ptr(const void *pointer, int fd);
int	print_unsigned(unsigned int number, int fd);
int	ft_printf(const char *format, ...);

#endif
