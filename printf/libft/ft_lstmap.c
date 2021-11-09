/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatthie <mmatthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 18:40:50 by mmatthie          #+#    #+#             */
/*   Updated: 2021/10/29 18:40:50 by mmatthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*li;
	t_list	*tmp;

	if (!lst || !f)
		return (NULL);
	li = NULL;
	tmp = NULL;
	while (lst)
	{
		tmp = ft_lstnew(f(lst->content));
		if (!tmp)
		{
			if (!del)
			{
				del(tmp->content);
				free(tmp);
				tmp = NULL;
				ft_lstclear(&li, del);
			}
			return (NULL);
		}
		ft_lstadd_back(&li, tmp);
		lst = lst->next;
	}
	return (li);
}
