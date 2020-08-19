//circular queue using array

#include<stdio.h>

#define size 5

int items[size];
int front = -1, rear = -1;

int isFull(){
    
    if((front == rear + 1) || (front == 0 && rear == size - 1)){
        return 1;
    }
    return 0;
}

int isEmpty(){
    if(front == -1){
        return 1;
    }
    return 0;
}

void enqueue(int element){

    if(isFull()){
        printf("The Circular Queue is full. \n");
    }
    else{
        if(front == -1) front = 0 ;
        rear = (rear + 1) % size;
        items[rear] = element;

        printf("The element inserted is : %d\n",element);
    }
}

int dequeue(){
    int element;

    if(isEmpty()){
        printf("The Circular Queue is empty. \n");
        return(-1);
    }
    else{
        element = items[front];

        if(front == rear){
            front = -1;
            rear = -1;
        }
        else{
            front = (front+1) % size;
        }

        printf("The element deleted is : %d\n",element);
        return(element);
    }
}

void display(){
    int i ;

    if(isEmpty()){
        printf("The circular queue is empty.\n");
    }
    else{
        printf("Front : %d \n",front+1);
        printf("Items : ");

        for(i = front ; i != rear ; i = (i+1)%size){
            printf("%d ",items[i]);
        }

        printf("Rear : %d \n",rear+1);
    }
}

int main(){

    enqueue(4);
    enqueue(5);
    enqueue(6);
    enqueue(7);
    enqueue(8);

    display();

    return 0;
}