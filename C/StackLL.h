#ifndef StackLL
#define StackLL

#include<stdbool.h>

struct node{
    int data;
    struct node *next;
};

typedef struct node Node;

Node *Stack = NULL;
int top = -1;

void push(int data);
void pop();
void show();
bool underflow();


#endif