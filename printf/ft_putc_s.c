/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putc_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatthie <mmatthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 22:19:35 by mmatthie          #+#    #+#             */
/*   Updated: 2021/11/15 22:21:00 by mmatthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putc(char c)
{
	return (write(1, &c, 1));
}

size_t	ft_puts(const char	*str)
{
	while (str)
		return (write(1, str, ft_strlen(str)));
	return (write(1, "(null)", 6));
}
