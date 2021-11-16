/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatthie <mmatthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 22:20:39 by mmatthie          #+#    #+#             */
/*   Updated: 2021/11/15 22:22:28 by mmatthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
//# include "libft.h"
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

size_t	ft_strlen(const char	*str);
size_t	ft_putc(char c);
size_t	ft_puts(const char	*str);
int		ft_check_var(va_list ap, int c);
int		ft_printf(const char *str, ...);
char	*ft_itoa(int n);
char	*ft_strdup(const char	*s);
int		ft_puti(int nb);
int		ft_putsize(unsigned long long nb, char *base, void *pt);

#endif
