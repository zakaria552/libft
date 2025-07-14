/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queue.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zfarah <zfarah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 13:16:20 by zfarah            #+#    #+#             */
/*   Updated: 2025/07/14 13:16:40 by zfarah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef QUEUE_H
# define QUEUE_H

# include "../linked_list/linked_list.h"

typedef struct s_queue
{
	t_list	*head;
	t_list	*tail;
}			t_queue;

t_queue		*init_queue(void *contenta);
t_list		*enqueue(t_queue *q, void *content);
void		dequeue(t_queue *q, void (*del)(void *));
#endif