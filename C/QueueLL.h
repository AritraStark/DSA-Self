#ifndef QueueLL
#define QueueLL

struct node{
    int data;
    struct node *next;
};

typedef struct node Node;

Node *Q;

void enqueue(int data);
void dequeue();
void printQ();

#endif