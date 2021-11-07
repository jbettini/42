/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatthie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 13:14:52 by mmatthie          #+#    #+#             */
/*   Updated: 2021/06/22 17:16:04 by mmatthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int	nb)
{
	long	i;
	long	result;

	i = 0;
	result = 0;
	if (nb < 0)
	{
		return (0);
	}
	while (result < nb)
	{
		result = i * i;
		if (result == nb)
		{
			return ((int)i);
		}
		i++;
	}
	return (0);
}
