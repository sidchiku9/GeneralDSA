#include<stdlib.h>
#include<iostream>

using namespace std;

class Node{
    public :
    int data;
    Node* next;
};

void printList(Node *n){
    while(n!=NULL){
        cout<<n->data<<"->";
        n = n->next;
    }
}

void push(Node **head_ref,int data){
    Node *new_node = new Node();
    new_node->data = data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

void insert(Node *prev_node, int data){
    if(prev_node==NULL){
        cout<<"The previous node cannot be NULL"<<endl;
        return;
    }
    Node *new_node = new Node();
    new_node->data = data;
    new_node->next = prev_node->next;
    prev_node = new_node;
}

void append(Node **head_ref,int data){
    Node *new_node = new Node();
    new_node->data = data;
    new_node->next = NULL;
    Node *last = *head_ref;

    if(*head_ref == NULL){
        *head_ref = new_node;
        return;
    }

    while(last->next != NULL){
        last = last->next;
    }

    last->next = new_node;
    return;
}

int main(){
    cout<<"Hopefully no errors"<<endl;
    return 0;
}