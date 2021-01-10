#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include "StackLL.h"


void push(int data){
    Node *temp = (Node*)malloc(sizeof(Node));
    temp->data = data;
    if(Stack == NULL){
        Stack = temp;
        Stack->next = NULL;
    }
    
    else{
        temp->next = Stack;
        Stack = temp;
    }
    top++;
}

bool underflow(){
    if(top<=-1)
    return true;
    else
    return false;
}

void pop(){
    if(underflow())
    printf("Stack Underflow\n");
    else{
        Node *temp = Stack;
        printf("%d is Popped\n",temp->data);
        Stack = temp->next;
        free(temp);
        top--;
    }
}

void show(){
    if(underflow())
    printf("Stack Underflow\n");
    else{
        Node *temp = Stack;
        printf("_____\n");
        while(temp!= NULL){
            printf("%d\n",temp->data);
            temp = temp->next;
        }
        printf("_____\n");
    }
}

// void main(){
//     push(10);
//     push(20);
//     push(30);
//     show();
//     pop();
//     show();
//     push(35);
//     show();
// }