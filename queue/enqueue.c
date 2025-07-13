#include "queue.h"

t_list    *enqueue(t_queue *q, void *content)
{
    t_list *list;
    
    list = malloc(sizeof(t_list));
    if (!list)
        return NULL;
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
