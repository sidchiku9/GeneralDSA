#include <stdlib.h>
#include <iostream>

using namespace std;

struct Node
{
    int key;
    Node *left;
    Node *right;

    Node(int k)
    {
        key = k;
        left = NULL;
        right = NULL;
    }
};

void inorder(Node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->key << " ";
        inorder(root->right);
    }
}

void preorder(Node *root)
{
    if (root != NULL)
    {
        cout << root->key << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(Node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout << root->key << " ";
    }
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);

    int choice;

    do
    {
        cout << "\t\t MENU :" << endl;
        cout << "1 : Inorder Transversal" << endl;
        cout << "2 : Preorder Transversal" << endl;
        cout << "3 : Postorder Transversal" << endl;
        cout << "4 : Exit the program" << endl;
        cout << "Please enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Inorder Transversal" << endl;
            inorder(root);
            cout << endl;
            break;

        case 2:
            cout << "Preorder Transversal" << endl;
            preorder(root);
            cout << endl;
            break;

        case 3:
            cout << "Postorder Transversal" << endl;
            postorder(root);
            cout << endl;
            break;

        case 4:
            cout << "Exiting the program" << endl;
            exit(1);
            break;

        default:
            cout << "Invalid input. Please try again" << endl;
            break;
        }

    } while (choice != 4);

    return 0;
}