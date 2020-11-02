#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>
#define bool int 

// structure of a stack node 
struct sNode 
{ 
	char data; 
	struct sNode* next; 
}; 

// Function to push an item to stack 
void push(struct sNode** top_ref, int new_data); 

// Function to pop an item from stack 
int pop(struct sNode** top_ref); 

// Returns 1 if character1 and character2 are matching left 
// and right Parenthesis 
bool isMatchingPair(char character1, char character2) 
{ 
	if (character1 == '(' && character2 == ')') 
		return 1; 
	else if (character1 == '{' && character2 == '}') 
		return 1; 
	else if (character1 == '[' && character2 == ']') 
		return 1; 
	else
		return 0; 
} 

// Return 1 if expression has balanced Parenthesis 
bool areParenthesisBalanced(char exp[]) 
{ 
	int i = 0; 

	// Declare an empty character stack 
	struct sNode* stack = NULL; 

	// Traverse the given expression to check matching 
	// parenthesis 
	while (exp[i]) 
	{ 
		// If the exp[i] is a starting parenthesis then push 
		// it 
		if (exp[i] == '{' || exp[i] == '(' || exp[i] == '[') 
			push(&stack, exp[i]); 

		// If exp[i] is an ending parenthesis then pop from 
		// stack and check if the popped parenthesis is a 
		// matching pair*/ 
		if (exp[i] == '}' || exp[i] == ')'
			|| exp[i] == ']') 
		{ 

			// If we see an ending parenthesis without a pair 
			// then return false 
			if (stack == NULL) 
				return 0; 

			// Pop the top element from stack, if it is not 
			// a pair parenthesis of character then there is a 
			// mismatch. 
			// his happens for expressions like {(}) 
			else if (!isMatchingPair(pop(&stack), exp[i])) 
				return 0; 
		} 
		i++; 
	} 

	// If there is something left in expression then there 
	// is a starting parenthesis without a closing 
	// parenthesis 
	if (stack == NULL) 
		return 1; //balanced 
	else
		return 0; //not balanced 
} 


int main() 
{   
    int n;
    printf("Enter the number of expressions you want to check : ");
    scanf("%d",&n);
    char output[n][1];
	char exp[100];

    for(int i = 0 ; i < n ; i++){
        scanf("%s",&exp);

        if (areParenthesisBalanced(exp)){
            output[i][0] = "B" ;}
	    else{
            output[i][0] = "NB" ; }
    }

    for(int i = 0 ; i < n ; i++){
        printf("%s\n",output[i][0]);
    }
	
	return 0; 
} 

void push(struct sNode** top_ref, int new_data) 
{ 
	struct sNode* new_node 
		= (struct sNode*)malloc(sizeof(struct sNode)); 

	if (new_node == NULL) 
	{ 
		printf("Stack overflow n"); 
		getchar(); 
		exit(0); 
	} 

	new_node->data = new_data; 

	new_node->next = (*top_ref); 

	(*top_ref) = new_node; 
} 

int pop(struct sNode** top_ref) 
{ 
	char res; 
	struct sNode* top; 

	if (*top_ref == NULL) 
	{ 
		printf("Stack overflow n"); 
		getchar(); 
		exit(0); 
	} 
	else
	{ 
		top = *top_ref; 
		res = top->data; 
		*top_ref = top->next; 
		free(top); 
		return res; 
	} 
}