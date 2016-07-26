#include <stdlib.h>
#include <stdio.h>

//declare boolean type in C
#ifndef __cplusplus
    typedef char bool;
    #define true 1
    #define false 0
#endif

/*
 * max is the maximum number of elements for the queue
 * size is the current number of elements in the queue
 * start is the index number where the queue started
 * end is the index number of the last element
 * elements is the array of the elements
 */
typedef struct queue
{
    int max;
    int size;
    int start;
    int end;
    int* elements;
}queue;

//create an empty queue with max number of elements as argumnet
queue* create(int max);

//insert new element in queue q
void enqueue (queue* que, int element);

//delete the first element in the queue q
int dequeue(queue* que);

//check if the queue is empty
bool isEmpty(queue *que);

//check wether the queue is full or not
bool isFull(queue* que);

//display the front element in the queue
int front(queue* que);
