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

struct Queue{
    Node *front, *rear;
    int size;

    Queue(){
        front = NULL;
        rear = NULL;
        size = 0;
    }

    void enqueue(int x){
        Node *temp = new Node(x);
        if(front == NULL){
            front = rear = temp;
            return;
        }
        rear->next = temp;
        rear = temp;
        size++;
    }

    void dequeue(){
        if(front == NULL){
            return;
        }
        Node *temp = front;
        front = front->next;
        if(front == NULL){
            rear = NULL;
        }
        delete(temp);
        size--;
    }

    void printQueue(){
        Node *temp = front;

        while(temp != NULL){
            cout << temp->key << "->";
            temp = temp -> next;
        }
    }
};

int main(){
    struct Queue q;
    int choice, data;

    

    return 0;
}