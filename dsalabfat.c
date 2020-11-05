#include <stdio.h>
#include <stdlib.h>

struct node {
  int key;
  struct node *left, *right;
};

struct node *newNode(int item) {
  struct node *temp = (struct node *)malloc(sizeof(struct node));
  temp->key = item;
  temp->left = temp->right = NULL;
  return temp;
}

struct node *insertData(struct node *node, int key) {

  if (node == NULL) 
  return newNode(key);

  if (key < node->key)
    node->left = insertData(node->left, key);
  else
    node->right = insertData(node->right, key);

  return node;
}

void printPreorder(struct node* node) 
{ 
     if (node == NULL) 
          return; 
  
     printf("%d ", node->key);   
     printPreorder(node->left);   
     printPreorder(node->right); 
}     

int maxValue(struct node* node) 
{    
    struct node* current = node; 

    while (current->right != NULL)  
        current = current->right; 
      
    return (current->key); 
} 

int minValue(struct node* node) { 
  struct node* current = node; 
  
  while (current->left != NULL) { 
    current = current->left; 
  } 
  return(current->key); 
} 

int main() {
  struct node *root = NULL;

  int maxElement, minElement, choice, capacity, element;

  do{
        printf("\t\t MENU\n");
        printf("1 : INSERT ELEMENT\n");
        printf("2 : PREORDER TRANSVERSAL\n");
        printf("3 : Print the First and Second maximum element\n");
        printf("4 : Print the First and Second minimum element\n");
        printf("5 : EXIT THE PROGRAM\n");
        printf("Please enter your choice now : \n");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            printf("Enter the number of elements you want in your BST\n");
            scanf("%d",&capacity);

            for (int i = 0; i < capacity; i++)
            {
                printf("Enter the element you want to insert into the BST\n");
                scanf("%d",&element);
                root = insertData(root, element);
            }
            break;

        case 2 :
            printf("Preorder traversal : \n");
            printPreorder(root);
            printf("\n");
            break;

        case 3 :
            maxElement = maxValue(root);
            printf("First Max element : %d", maxElement);
            break;

        case 4 :
            minElement = minValue(root);
            printf("First Min element : %d", minElement);
            break;

        case 5 :
            break;
        
        default:
            break;
        }

  }while(choice != 5);

  return 0;
}