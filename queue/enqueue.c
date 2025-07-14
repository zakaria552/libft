/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enqueue.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zfarah <zfarah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 13:15:42 by zfarah            #+#    #+#             */
/*   Updated: 2025/07/14 13:15:46 by zfarah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "queue.h"

t_list	*enqueue(t_queue *q, void *content)
{
	t_list	*list;

	list = malloc(sizeof(t_list));
	if (!list)
		return (NULL);
	list->content = content;
	list->next = NULL;
	if (!q->head)
	{
		q->head = list;
		q->tail = list;
		return (list);
	}
	q->tail->next = list;
	q->tail = list;
	return (list);
}
