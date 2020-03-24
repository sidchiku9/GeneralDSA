#include<stdlib.h>
#include<iostream>

using namespace std;

class Node{
    public :
    int data;
    Node *next;
};

void add(Node **head_ref,int data){
    Node *new_node = new Node();
    new_node->data = data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

void append(Node **head_ref,int data){
    Node *new_node = new Node();
    new_node->data = data;
    Node *last_node = *head_ref;
    new_node->next = NULL;

    if(*head_ref==NULL){
        *head_ref = new_node;
        return;
    }
    //return here means to just exit the function. that's it

    while(last_node->next!=NULL){
        last_node = last_node->next;
    }

    last_node->next = new_node;
    return;
}

void insert(Node *prev_node, int data){

    if(prev_node==NULL){
        cout<<"The previous node can't be NULL"<<endl;
        return;
    }

    Node *new_node = new Node();
    new_node->data = data;
    new_node->next = prev_node->next;
    prev_node->next = new_node->next;
}

void printlist(Node *n){
    while(n!=NULL){
        cout<<n->data<<"->";
        n = n->next;
    }
}

int main(){
    Node *head = NULL;

    append(&head,0);

    add(&head,1);
    add(&head,2);
    add(&head,3);
    add(&head,4);
    
    printlist(head);

    return 0;
}