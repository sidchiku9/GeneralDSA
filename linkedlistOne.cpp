#include<stdlib.h>
#include<iostream>

using namespace std;

struct Node{
    int key;
    Node *next;

    Node(int x){
        key = x;
        next = NULL;
    }
};

//insert at the beginning of the linked list

Node *insertAtBeginning(Node *head, int key){
    Node *temp = new Node(key);
    temp -> next = head;
    return temp;
}

void printList(Node *head){
    Node *current = head;

    while(current != NULL){
        cout << current -> key << " -> ";
        current = current -> next;
    }
}

int main(){
    Node *head = NULL;

    head = insertAtBeginning(head, 20);
    head = insertAtBeginning(head, 5);
    head = insertAtBeginning(head, 8);

    printList(head);

    return 0;
}