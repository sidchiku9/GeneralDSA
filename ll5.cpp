#include<stdlib.h>
#include<iostream>

using namespace std;

class Node{
    public :
    int data;
    Node *next;
};

void printList(Node *n){
    while(n!=NULL){
        cout<<n->data<<"->";
        n = n->next;
    }
}

void insert(Node **head_ref, int data){
    Node *new_node = new Node();
    new_node->data = data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

int main(){
    Node *head = NULL;

    insert(&head,1);
    insert(&head,2);
    insert(&head,3);
    insert(&head,4);
    insert(&head,5);
    insert(&head,6);
    insert(&head,7);
    insert(&head,8);
    insert(&head,9);
    insert(&head,10);

    printList(head);

    cout<<endl;
    
    return 0;
}