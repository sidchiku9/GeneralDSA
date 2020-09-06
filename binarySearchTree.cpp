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

Node *insertData(Node *root, int x){
    if(root == NULL)
    return new Node(x);

    else if(root->key < x)
    root->right = insertData(root->right,x);

    else
    root->left = insertData(root->left,x);
    
    return root;
}

