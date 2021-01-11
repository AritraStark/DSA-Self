#include<stdio.h>
#include<stdlib.h>
#include "StackArr.h"

bool underflow(){
    if(top<=-1)
    return true;
    else
    return false;
}

bool overflow(){
    if(top>=100)
    return true;
    else
    return false;
}

void push(Stack a){
    if(overflow())
    printf("Stack Overflow\n");
    else{
        top++;
        printf("Enter data to push\n");
        scanf("%d",&a.arr[top]);
        printf("Data pushed");
    }
}

void pop(Stack a){
    if(underflow())
    printf("Stack Underflow\n");
    else{
        printf("%d is Popped\n",a.arr[top]);
        top--;
    }
}

void show(Stack a){
    if(underflow())
    printf("Stack Underflow\n");
    else{
        printf("The stack is :\n");
        printf("-----\n");
        int j = top;
        for(j;j>=0;j--)
        printf("%d\n",a.arr[j]);
        printf("-----\n");
    }
}