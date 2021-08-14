#include<stdio.h>
#include<stdlib.h>
#include "SLL.h"


void append(int data){
    Node *temp = (Node*)malloc(sizeof(Node));
    temp->data = data;
    temp->next = NULL;
    if(head == NULL)
    head = temp;
    else{
        Node *temp2 = head;
        while(temp2->next!=NULL)
        temp2 = temp2->next;
        temp2->next = temp;
    }
    size++;
}

void addHead(int data){
    Node *temp = (Node*)malloc(sizeof(Node));
    temp->data = data;
    if(head == NULL){
        head = temp;
        head->next = NULL;
    }
    else{
        temp->next = head;
        head = temp;
    }
    size++;
}

void addAtN(int data,int n){
    Node *temp = (Node*)malloc(sizeof(Node));
    temp->data = data;
    if(head == NULL)
    printf("List is empty\n");
    else{
        Node *temp2 = head;
        for(int i=0;i<n-1;i++)
        temp2 = temp2->next;
        temp->next = temp2->next;
        temp2->next = temp;
        size++;
    }
}

void printList(){
    Node *temp = head;
    while(temp != NULL){
        printf("%d -> ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void showAtN(int n){
    Node *temp2 = head;
    for(int i=0;i<n-1;i++)
    temp2 = temp2->next;
    printf("%d -> ",temp2->data);
}

void reverseIter(){
    Node *cur,*prev,*nex;
    cur = head;
    prev = NULL;
    while(cur!=NULL){
        nex = cur->next;
        cur->next = prev;
        prev = cur;
        cur = nex;
    }
    head = prev;
}

void reverseRec(Node *cur,Node *prev){
    if(cur == NULL){
        head = prev;
        printf("Reversed\n");
    }
    
    else{
        Node *nex = cur->next;
        cur->next = prev;
        reverseRec(nex,cur);
    }
}

void length(){
    printf("The length of the list is: %d\n",size);
}

void deleteAtN(int n){
    Node *prev = head;
    for (int i=0;i<n-1;i++)
    prev=prev->next;
    Node *nex = prev->next->next;
    free(prev->next);
    prev->next = nex;
    
}

void deleteHead(){
    if (head == NULL) 
    return; 
    Node *temp = head;
    head = head->next;
    free(temp);
}

void main(){
    append(10);
    append(15);
    addHead(1);
    addAtN(5,2);
    printList();
    reverseIter();
    printList();
    reverseRec(head,NULL);
    printList();
    deleteHead();
    printList();
}