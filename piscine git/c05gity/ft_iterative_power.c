/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatthie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 17:51:49 by mmatthie          #+#    #+#             */
/*   Updated: 2021/06/22 12:46:28 by mmatthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_power(int	nb, int	power)
{
	int	i;
	int	j;

	i = power;
	j = 1;
	if (power < 0)
		return (0);
	while (i > 0)
	{
		j *= nb;
		i--;
	}
	return (j);
}
