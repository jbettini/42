/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_var.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatthie <mmatthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 22:23:59 by mmatthie          #+#    #+#             */
/*   Updated: 2021/11/16 18:02:14 by mmatthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_var(va_list ap, int n)
{
	{
		if (n == 'c')
			return (ft_putc(va_arg(ap, int)));
		else if (n == 's')
			return (ft_puts(va_arg(ap, char *)));
		else if (n == '%')
			return (ft_putc('%'));
		else if (n == 'd' || n == 'i')
			return (ft_puti(va_arg(ap, int)));
		else if (n == 'p')
			return (write(1, "0x", 2) + \
			ft_putsize(0, "0123456789abcdef", (void *)va_arg(ap, char *)));
		else if (n == 'u')
			return (ft_putsize((unsigned long long) \
			va_arg(ap, unsigned int), "0123456789", NULL));
		else if (n == 'x')
			return (ft_putsize((unsigned long long) \
			va_arg(ap, unsigned int), "0123456789abcdef", NULL));
		else if (n == 'X')
			return (ft_putsize((unsigned long long) \
			va_arg(ap, unsigned int), "0123456789ABCDEF", NULL));
	}
	return (1);
}
