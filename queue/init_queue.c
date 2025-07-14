/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_queue.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zfarah <zfarah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 13:15:48 by zfarah            #+#    #+#             */
/*   Updated: 2025/07/14 13:15:53 by zfarah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "queue.h"

t_queue	*init_queue(void *content)
{
	t_queue	*q;

	q = malloc(sizeof(t_queue));
	if (!q)
		return (NULL);
	q->head = NULL;
	q->tail = NULL;
	if (!content)
		return (q);
	if (!enqueue(q, content))
	{
		free(q);
		return (NULL);
	}
	return (q);
}
