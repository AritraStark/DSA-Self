#include<stdio.h>
#include<stdlib.h>
#include "QueueArr.h"

bool isEmpty(Queue a){
    if(a.top == a.bottom)
    return true;
    else
    return false;
}

void init(Queue a){
    printf("Enter size of Queue to initiate:\n");
    scanf("%d",&a.size);
    a.size++;
    a.top = 0;
    a.bottom = 0;
    a.arr = (int*)malloc(a.size*sizeof(int));
}

void enqueue(Queue a){
    a.top++;
    printf("Enter value to enqueue\n");
    scanf("%d",&a.arr[a.top]);
}

void dequeue(Queue a){
    if(isEmpty(a))
    printf("Queue is empty\n");
    else{
        printf("%d is removed",a.arr[a.bottom]);
        a.bottom++;
    }
}

void show(Queue a){
    if(isEmpty(a))
    printf("Queue is empty\n");
    else{
        int j = a.top;
        for(j;j>=a.bottom;j--)
        printf(" - %d");
        printf("\n");
    }
}