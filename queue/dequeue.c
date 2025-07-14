/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dequeue.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zfarah <zfarah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 13:15:30 by zfarah            #+#    #+#             */
/*   Updated: 2025/07/14 13:15:38 by zfarah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "queue.h"

void	dequeue(t_queue *q, void (*del)(void *))
{
	t_list	*head;

	if (!q)
		return ;
	head = q->head;
	if (!head)
		return ;
	q->head = head->next;
	if (!q->head)
		q->tail = NULL;
	del(head->content);
	free(head);
}
