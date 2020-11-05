#include <stdlib.h>
#include <iostream>

using namespace std;

struct Node
{
    int key;
    Node *left;
    Node *right;
    Node(int x)
    {
        key = x;
        left = NULL;
        right = NULL;
    }
};

Node *insertData(Node *root, int x)
{
    if (root == NULL)
        return new Node(x);
    else if (root->key < x)
        root->right = insertData(root->right, x);
    else
        root->left = insertData(root->left, x);
    return root;
}

void preOrder(Node *root)
{
    if (root != NULL)
    {
        cout << root->key << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

int maxValue(struct Node* node) 
{    
    struct Node* current = node; 

    while (current->right != NULL)  
        current = current->right; 
      
    return (current->key); 
} 

void secondLargestUtil(Node *root, int &c) 
{ 
    if (root == NULL || c >= 2) 
        return; 

    secondLargestUtil(root->right, c); 
    c++; 
    if (c == 2) 
    { 
        cout << "Second Max element : " << root->key << endl; 
    } 
    secondLargestUtil(root->left, c); 
} 

void secondLargest(Node *root) 
{ 
    int c = 0; 
    secondLargestUtil(root, c); 
} 

int main()
{
    int choice, element, capacity = 0;
    int firstMax = 0, firstMin = 0, secondMin = 0;
    Node *root = NULL;
    do
    {
        cout << "\t\t MENU" << endl;
        cout << "1 : INSERT ELEMENT" << endl;
        cout << "2 : PREORDER TRANSVERSAL" << endl;
        cout << "3 : Print the First and Second minimum element" << endl;
        cout << "4 : Print the First and Second maximum element" << endl;
        cout << "5 : EXIT THE PROGRAM" << endl;
        cout << "Please enter your choice now : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the number of elements you want in your BST" << endl;
            cin >> capacity;

            for (int i = 0; i < capacity; i++)
            {
                cout << "Enter the element you want to insert into the BST " << endl;
                cin >> element;
                root = insertData(root, element);
            }
            break;

        case 2:
            cout << "Preorder transversal : " << endl;
            preOrder(root);
            cout << endl;
            break;

        case 3 :

            break;

        case 4 :
            firstMax = maxValue(root);
            cout << "First Max element : " << firstMax << endl;
            secondLargest(root);
            break;

        case 5 :
            break;

        default:
            cout << "Invalid input. Please try again" << endl;
            break;
        }
    } while (choice != 5);
    return 0;
}