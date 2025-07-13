#include "queue.h"

t_queue *init_queue(void *content)
{
    t_queue *q;

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
        return NULL;
    }
    return (q);
}
