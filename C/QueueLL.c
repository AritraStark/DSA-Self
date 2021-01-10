#include<stdlib.h>
#include<stdio.h>
#include "QueueLL.h"

void enqueue(int data){
    Node *temp = (Node*)malloc(sizeof(Node));
    temp->data = data;
    if(Q == NULL){
        Q = temp;
        Q->next = NULL;
    }
    else{
        temp->next = Q;
        Q = temp;
    }
}

void dequeue(){
    Node *temp = Q;
    while(temp->next->next != NULL)
    temp = temp->next;
    free(temp->next);
    temp->next = NULL;
}

void printQ(){
    Node *temp = Q;
    while(temp != NULL){
        printf(" - %d",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// void main(){
//     enqueue(5);
//     enqueue(15);
//     enqueue(25);
//     printQ();
//     dequeue();
//     printQ();
//     enqueue(35);
//     printQ();
// }