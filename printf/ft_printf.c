/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatthie <mmatthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 22:22:36 by mmatthie          #+#    #+#             */
/*   Updated: 2021/11/15 22:23:45 by mmatthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

/*str[i] */
int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		i;
	int		j;

	i = 0;
	j = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%')
			j += ft_check_var(ap, str[++i]);
		else
			j += write(1, &str[i], 1);
		i++;
	}
	va_end(ap);
	return (j);
}
