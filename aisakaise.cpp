#include<stdlib.h>
#include<iostream>
#include<string>

using namespace std;

int main(){
    string name;

    cout << "Please enter your name : " << endl;
    getline(cin, name);

    cout << "Your name is : " << name << endl;

    return 0;
}