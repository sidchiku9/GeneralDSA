#include<stdlib.h>
#include<iostream>

using namespace std;

class Stack{
    int top;
    public :
    int a[10];
    Stack(){
        top = -1;
    }

    void push(int x);
    int pop();
    void isEmpty();
};

void Stack :: push(int x){
    if(top>=10){
        cout<<"Stack overflow"<<endl;
    }
    else{
        a[++top] = x;
        cout<<"Element inserted"<<endl;
    }
}

int Stack :: pop(){
    if(top<0){
        cout<<"Stack underflow"<<endl;
        return 0;
    }
    else{
        int d = a[top--];
        return d;
    }
}

void Stack :: isEmpty(){
    if(top<0){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }
}

int main(){
    Stack s;

    s.isEmpty();

    s.push(1);
    s.push(2);
    s.push(3);

    s.pop();

    s.isEmpty();

    return 0;
}