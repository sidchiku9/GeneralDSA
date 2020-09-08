#include <stdlib.h>
#include <iostream>

using namespace std;

struct Node
{
    int key;
    Node *next;

    Node(int x)
    {
        key = x;
        next = NULL;
    }
};

struct Queue
{
    Node *front, *rear;
    int size;

    Queue()
    {
        front = NULL;
        rear = NULL;
        size = 0;
    }

    void enqueue(int x)
    {
        Node *temp = new Node(x);
        if (front == NULL)
        {
            front = rear = temp;
            return;
        }
        rear->next = temp;
        rear = temp;
        size++;
    }

    void dequeue()
    {
        if (front == NULL)
        {
            return;
        }
        Node *temp = front;
        front = front->next;
        if (front == NULL)
        {
            rear = NULL;
        }
        delete (temp);
        size--;
    }

    void printQueue()
    {
        Node *temp = front;

        while (temp != NULL)
        {
            cout << temp->key << "->";
            temp = temp->next;
        }
    }
};

int main()
{
    struct Queue q;
    int choice, data;

    do
    {
        cout << "\t\t MENU" << endl;
        cout << "1 ENQUEUE" << endl;
        cout << "2 DEQUEUE" << endl;
        cout << "3 PRINT QUEUE" << endl;
        cout << "4 EXIT THE PROGRAM" << endl;
        cout << "Please enter your choice" << endl;

        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the data element you want to insert" << endl;
            cin >> data;
            q.enqueue(data);
            break;

        case 2:
            cout << "Deleting element from the queue" << endl;
            q.dequeue();
            break;

        case 3:
            cout << "Printing the queue : " << endl;
            q.printQueue();
            cout << endl;
            break;

        case 4:
            exit(1);
            break;

        default:
            cout << "Invalid input. Please try again" << endl;
            break;
        }
    } while (choice != 4);

    return 0;
}