#include<stdlib.h>

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

Node *insertAtBeginning(Node *head, int x){
    Node *temp = new Node(x);
    temp -> next = NULL;
    return temp;
}

int main(){
    Node *head = NULL;
    head = insertAtBeginning(head, 20);
    head = insertAtBeginning(head, 5);
    head = insertAtBeginning(head, 8);

    return 0;
}