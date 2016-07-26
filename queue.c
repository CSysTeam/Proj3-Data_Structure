#include "queue.h"

queue* create(int max)
{
    queue* que = malloc(sizeof (queue));

    que->elements = malloc(sizeof(int)*max);
    que->max = max;
    que->size = 0;
    que->start = 0;
    que->end = -1;

    return que;
}

void enqueue (queue* que, int element)
{
    if (isFull(que))
        puts("queue is full!\n");

    else
    {
        que->size++;
        que->end++;
        que->elements[que->end] = element;
        puts("element enqueued successfully\n");
    }

    return;
}

int dequeue (queue* que)
{
    if (isEmpty(que))
    {
        puts("queue is empty!\n");
        return 0;
    }

    else
    {
        int data = que->elements[que->start];
        que->start ++;
        que->size --;
        return data;
    }
}

bool isEmpty(queue* que)
{
    if (que->size == 0)
        return true;

    else
        return false;
}

bool isFull(queue *que)
{
    if (que->size == que->max)
        return true;

    else
        return false;
}

int front(queue *que)
{
    if(isEmpty(que))
        return 0;

    return que->elements[que->start];
}
