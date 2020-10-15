#include<stdlib.h>
#include<iostream>
#include<string>
#include<queue>

using namespace std;

#define MAX 100

queue <char arr[MAX]> q;
int j = 0;

int breakSubstring(char str[]){
    char word[MAX];

    for(int i = 0 ; i < str.length() ; i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            for(j = 0; j < i ; j++){
                word[j] += str[i];
            }
        }
        q.push(word);
    }

    q.display();
}

int main(){

    int choice;
    char word[MAX;

   do{
        cout << "\t\tMENU" << endl;
        cout << "1 : Input String" << endl;
        cout << "2 : Break into substrings" << endl;
        cout << "3 : Print front of the LinkedList" << endl;
        cout << "4 : Print the count of vowels in the deleted front element" << endl;
        cout << "5 : Exit" << endl;
        cout << "Please enter your choice : ";
        cin >> choice;

        switch(choice){
            case 1 : 
            cout << "Enter the word you want to break into substring" << endl;
            cin >> word;
            break;

            case 2 : 
            breakSubstring(word);
            break;

            case 3 : 
            break;

            case 4 :
            break;

            case 5 : 
            return(1);
            break;

            default : 
            cout << "Invalid input. Please try again." << endl;
            break;
        }
    }while(choice!=5); 

    return 0;
}