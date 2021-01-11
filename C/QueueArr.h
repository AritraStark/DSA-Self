#ifndef QueueArr
#define QueueArr

#include<stdbool.h>

struct Queue{
    int top,bottom;
    int size;
    int *arr;
};

typedef struct Queue Queue;

void init(Queue a);
void enqueue(Queue a);
void dequeue(Queue a);
void show(Queue a);
bool isEmpty(Queue a);

#endif