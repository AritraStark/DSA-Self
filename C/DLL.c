#include<stdio.h>
#include<stdlib.h>
#include "DLL.h"


void append(int data){
    Node *temp = (Node*)malloc(sizeof(Node));
    temp->data = data;
    if(head == NULL){
        head = temp;
        temp->prev = NULL;
        temp->next = NULL;
    }
    
    else{
        Node *temp2 = head;
        while(temp2->next!=NULL)
        temp2 = temp2->next;
        temp2->next = temp;
        temp->next = NULL;
        temp->prev = temp2;
    }
    size++;
    tail = temp;
}

void addHead(int data){
    Node *temp = (Node*)malloc(sizeof(Node));
    temp->data = data;
    if(head == NULL){
        head = temp;
        head->next = NULL;
        head->prev = NULL;
    }
    else{
        temp->next = head;
        head->prev = temp;
        temp->prev = NULL;
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
        temp->prev = temp2;
        temp->next = temp2->next;
        temp2->next = temp;
        size++;
        if(temp->next == NULL)
        tail = temp;
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

void printRev(){
    Node *temp = tail;
    while(temp!=NULL){
        printf("%d -> ",temp->data);
        temp = temp->prev;
    }
    printf("\n");
}

void length(){
    printf("The length of the list is: %d\n",size);
}

void deleteAtN(int n){
    
}

void main(){
    append(10);
    append(15);
    addHead(1);
    printRev();
    addAtN(5,2);
    printList();
    printRev();
    deleteAtN(2);
    printList();
    printRev();
}