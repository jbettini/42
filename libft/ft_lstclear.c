/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatthie <mmatthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 18:39:38 by mmatthie          #+#    #+#             */
/*   Updated: 2021/10/29 18:39:38 by mmatthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*li;

	while ((*lst))
	{
		del((*lst)->content);
		li = *lst;
		*lst = (*lst)->next;
		free (li);
	}
	*lst = NULL;
}
