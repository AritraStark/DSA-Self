#ifndef DLL
#define DLL

struct Node{
    int data;
    struct Node *next,*prev;
};

typedef struct Node Node;

Node *head,*tail;
int size = 0;

void append(int data);
void addHead(int data);
void addAtN(int data,int n);
void printList();
void showAtN(int n);
void printRev();
void length();
void deleteAtN(int n);

#endif