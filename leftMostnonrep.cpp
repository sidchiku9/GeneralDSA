#include<stdlib.h>
#include<iostream>
#include<string>

using namespace std;

void nonRepeatingChars(string s){
    int counter[26] = {0};
    int count;

    for(int i = 0 ; i < s.length() ; i++){
        counter[s[i] - 'a']++;
    }

    for(int i = 0 ; i < 26 ; i++){
        if(counter[i] == 1){
            cout << "Left Most Non Rep Characters : " << char(i + 'a') << endl;
            cout << "Index : " << i << endl;
            break;
        }
        else{
            cout << "All characters are repeating." << endl;
            cout << "-1" << endl;
            break;
        }
    }
}

int main(){
    string s;

    cout << "Enter the string : " << endl;
    getline(cin, s);

    nonRepeatingChars(s);

    return 0;
}