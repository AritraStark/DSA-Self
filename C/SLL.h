#ifndef SLL
#define SLL

struct node{
    int data;
    struct node *next;
};

typedef struct node Node;

Node *head = NULL;
int size = 0;

void append(int data);
void addHead(int data);
void addAtN(int data,int n);
void printList();
void showAtN(int n);
void reverseIter();
void reverseRec();
void length();
void deleteAtN(int n);
void deleteHead();

#endif