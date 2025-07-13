#include "queue.h"

void    dequeue(t_queue *q, void (*del)(void *))
{
    t_list *head;
    
    if (!q)
        return;
    head = q->head;
    if (!head)
        return;
    q->head = head->next;
    if (!q->head)
        q->tail = NULL;
    del(head->content);
    free(head);
}
