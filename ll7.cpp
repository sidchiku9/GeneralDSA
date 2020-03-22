#include<stdlib.h>
#include<iostream>
#include<stdio.h>

using namespace std;

struct Node{
    int data;
    struct Node *next;
};

void push(struct Node **head_ref,int new_data){
    struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

void deleteNode(struct Node **head_ref,int key){
    struct Node *temp = *head_ref,*prev;

    if(temp !=NULL && temp->data==key){
            *head_ref = temp->next;
            free(temp);
            return;
    }

    while(temp!=NULL && temp->data!=key){
        prev = temp;
        temp = temp->next;
    }

    if(temp==NULL){
        return;
    }

    prev->next = temp->next;
    free(temp);
}

void printList(struct Node *node){
    while(node!=NULL){
        cout<<node->data<<"->";
        node = node->next;
    }
}

int main(){
    struct Node *head = NULL;

    push(&head,7);
    push(&head,1);
    push(&head,3);
    push(&head,2);

    cout<<"The curated linked list is"<<endl;
    printList(head);
    deleteNode(&head,1);
    cout<<endl;

    cout<<"Linked list after deletion of 1"<<endl;
    printList(head);
    cout<<endl;

    return 0;
}