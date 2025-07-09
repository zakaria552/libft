/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdellast_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zfarah <zfarah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 13:37:49 by zfarah            #+#    #+#             */
/*   Updated: 2025/07/09 14:35:48 by zfarah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_list.h"

void	ft_lstdellast(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*to_del;

	current = *lst;
	if (!current)
		return ;
	if (!current->next)
	{
		ft_lstdelone(current, del);
		*lst = NULL;
		return ;
	}
	while (current->next)
	{
		if (!current->next->next)
		{
			to_del = current->next;
			current->next = NULL;
			ft_lstdelone(to_del, del);
			break ;
		}
		current = current->next;
	}
}
