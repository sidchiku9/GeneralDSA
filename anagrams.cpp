#include<stdlib.h>
#include<iostream>
#include<string>

using namespace std;

bool anagram(string sOne, string sTwo){
    int countOne[26] = {0};
    int countTwo[26] = {0};
    int counter = 0;

     for(int i = 0 ; i < sOne.length() ; i++){
        countOne[sOne[i] - 'a']++;
    }

    for(int i = 0 ; i < sTwo.length() ; i++){
        countTwo[sTwo[i] - 'a']++;
    }

    for(int i = 0 ; i < 26 ; i++){
       if(countOne[i] == countTwo[i]){
           counter++;
       }
    }

    if(counter == 26){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    string sOne, sTwo;
    int counter = 0;

    cout << "ANAGRAM CHECK " << endl;
    cout << "Enter the first string : " << endl;
    getline(cin, sOne);
    cout << "Enter the second string : " << endl;
    getline(cin, sTwo);

    if(anagram(sOne, sTwo)){
        cout << "The strings are anagrams" << endl;
    }
    else{
        cout << "The strings are not anagrams" << endl;
    }

    return 0;
}