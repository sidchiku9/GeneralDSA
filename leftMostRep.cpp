#include<stdlib.h>
#include<iostream>
#include<string>

using namespace std;

void repeatingChars(string s){
    int count[26] = {0};
    
    for(int i = 0 ; i < s.length() ; i++){
        count[s[i] - 'a']++;
    }

    for(int i = 0 ; i < 26 ; i++){
        if(count[i] > 1){
            cout << "LMRC : " << char('a' + i) << endl;
            cout << "Index of LMRC : " << i << endl;
            break;
        }
        else{
            cout << "No LMRC" << endl;
            cout << "-1" << endl;
            break;
        }
    }
}

int main(){
    string s;

    cout << "Enter your string : " << endl;
    getline(cin,s);

    repeatingChars(s);

    return 0;
}

