#include <stdlib.h>
#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};
Node *head;

void push(int data)
{
    Node *temp = new Node();

    if (!temp)
    {
        cout << "Stack overflow" << endl;
        exit(1);
    }
    temp->data = data;
    temp->next = head;
    head = temp;
}

void pop()
{
    int remove;
    Node *temp = new Node();

    if (head == NULL)
    {
        cout << "The stack is empty" << endl;
    }
    remove = head->data;
    temp = head;
    head = head->next;
    free(temp);

    cout << "ELEMENT REMOVED : " << remove << endl;
}

void printStack()
{
    Node *current = new Node();
    current = head;

    while (current != NULL)
    {
        cout << current->data << "-> ";
        current = current->next;
    }
    cout << endl;
}

int main()
{
    int inputData, choice;

    do
    {
        cout << "\t\t MENU" << endl;
        cout << "ENTER 1 to PUSH data into STACK" << endl;
        cout << "ENTER 2 to POP data from STACK" << endl;
        cout << "ENTER 3 to PRINT the STACK" << endl;
        cout << "ENTER 4 to EXIT the program" << endl;

        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the data to PUSH to stack" << endl;
            cin >> inputData;
            push(inputData);
            break;

        case 2:
            pop();
            break;

        case 3:
            printStack();
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