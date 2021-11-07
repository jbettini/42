/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatthie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 12:15:34 by mmatthie          #+#    #+#             */
/*   Updated: 2021/06/22 17:19:24 by mmatthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_factorial(int	nb)
{
	int	i;
	int	r;

	i = 1;
	r = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (i <= nb)
	{
		r *= i;
		i++;
	}
	return (r);
}
/*
int	main (void)
{
	printf("%d\n", ft_iterative_factorial(34));
	return (0);
}
*/
