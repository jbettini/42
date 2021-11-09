/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatthie <mmatthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 21:15:16 by mmatthie          #+#    #+#             */
/*   Updated: 2021/10/21 21:15:16 by mmatthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void	*str, size_t n)

{
	size_t	i;

	i = 0;
	while (i < n)
		*(char *)(str + i++) = 0;
}