/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatthie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 12:53:59 by mmatthie          #+#    #+#             */
/*   Updated: 2021/06/22 15:38:40 by mmatthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int	nb, int	power)
{
	if (power < 0)
		return (0);
	if (power < 1)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
