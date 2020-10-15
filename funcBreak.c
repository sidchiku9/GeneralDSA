#include<stdlib.h>
#include<string.h>

#define N 100


struct node{ 
	char str[100];
	struct node *next;
};

int main() {
	
	struct node *front,*rear = NULL;
	struct node newnode = (struct node)malloc(sizeof(struct node));
	
	char *str;
	char *ss;
	scanf("%[^\n]%*c", str);
	
	int l = strlen(str);
	
	int i = 0;
	for(i = 0; i < l; i++) {
		
		if(str[i]!='a' || str[i]!='e' || str[i]!='i' || str[i]!='o' ||str[i]!='u') {
			ss[i] = str[i];
		}
		else {
			
			ss[i] = str[i];
			ss[i+1]='\0';
			strcpy(newnode->str,ss);
		}
		if(!rear)
		rear = newnode;
		else
		rear->next = newnode;
		
		ss = NULL;
	}	
}