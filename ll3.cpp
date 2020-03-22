#include <stdlib.h>
#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void push(Node **head_ref, int data)
{
    Node *new_node = new Node();
    new_node->data = data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void insert(Node *prev_node, int data)
{
    if (prev_node == NULL)
    {
        cout << "The previous node cannot be NULL" << endl;
        return;
    }
    Node *new_node = new Node();
    new_node->data = data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

void append(Node **head_ref, int data)
{
    Node *new_node = new Node();
    Node *last = *head_ref;
    new_node->data = data;
    new_node->next = NULL;

    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }

    while (last->next != NULL)
    {
        last = last->next;
    }

    last->next = new_node;
    return;
}

void printList(Node *n)
{
    while (n != NULL)
    {
        cout << n->data << "->";
        n = n->next;
    }
}

int main()
{
    Node* head = NULL;
    append(&head,6);
    push(&head,7);
    push(&head,8);
    append(&head,5);
    insert(head->next,9);

    cout<<"The curated linked list is : "<<endl;
    printList(head);

    return 0;
}