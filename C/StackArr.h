#ifndef StackArr
#define StackArr

#include<stdbool.h>

struct Stack{
    int arr[101];
};
int top=-1;
typedef struct Stack Stack;

void push(Stack a);
void pop(Stack a);
void show(Stack a);
bool underflow();
bool overflow();

#endif