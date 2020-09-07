#include<stdlib.h>
#include<iostream>

using namespace std;

struct Node{
    int key;
    Node *left;
    Node *right;

    Node(int x){
        key = x;
        left = NULL;
        right = NULL;
    }
};

Node *getSuccessor(Node *root){
    Node *current = root->right;

    while(current != NULL && current->left != NULL){
        current = current -> left;
    }

    return current;
}

Node *insertData(Node *root, int x){
    if(root == NULL)
    return new Node(x);

    else if(root->key < x)
    root->right = insertData(root->right,x);

    else
    root->left = insertData(root->left,x);
    
    return root;
}

Node *deleteNode(Node *root, int x){
    if(root == NULL){
        return root;
    }
    if(root->key > x){
        root->left = deleteNode(root->left,x);
    }
    else if(root->key < x){
        root->right = deleteNode(root->right,x);
    }
    else{
        if(root->left == NULL){
            Node *temp = root->right;
            delete root;
            return temp; 
        }
        else if(root->right == NULL){
            Node *temp = root->left;
            delete root;
            return temp;
        }
        else{
            Node *successor = getSuccessor(root);
            root->key = successor->key;
            root->right = deleteNode(root->right,successor->key);
        }
    }
    return root;
}

void inOrder(Node *root){
    if(root != NULL){
        inOrder(root->left);
        cout << root->key << " ";
        inOrder(root->right);
    }
}

void postOrder(Node *root){
    if(root!=NULL){
        postOrder(root->left);
        postOrder(root->right);
        cout << root->key << " ";
    }
}

void preOrder(Node *root){
    if(root != NULL){
        cout << root->key << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

int main(){
    int choice, element;
    Node *root = NULL;

    do{
        cout << "\t\t MENU" << endl;
        cout << "1 : INSERT ELEMENT" << endl;
        cout << "2 : DELETE ELEMENT" << endl;
        cout << "3 : INORDER TRANSVERSAL" << endl;
        cout << "4 : POSTORDER TRANSVERSAL" << endl;
        cout << "5 : PREORDER TRANSVERSAL" << endl;
        cout << "6 : EXIT THE PROGRAM" << endl;

        cout << "Please enter your choice now : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the element you want to insert into the BST" << endl;
            cin >> element;
            insertData(root, element);
            break;

        case 2:
            cout << "Enter the element you want to delete from the BST" << endl;
            cin >> element;
            deleteNode(root, element);
            break;

        case 3 :
            cout << "Inorder transversal : " << endl;
            inOrder(root);

        case 4 : 
            cout << "Postorder transversal : " << endl;
            postOrder(root);

        case 5 :
            cout << "Preorder transversal : " << endl;
            preOrder(root);

        case 6 : 
            cout << "Exiting the program" << endl;
            exit(1); 
        
        default:
            cout << "Invalid input. Please try again" << endl;
            break;
        }
    }while(choice != 6);

    return 0;
}