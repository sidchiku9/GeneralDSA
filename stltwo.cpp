#include<vector>
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    vector <int> arr;
    int num,data;

    cout<<"How many elements do you want in your array?"<<endl;
    cin>>num;

    for(int i=0;i<num;i++){
        cout<<"Enter your data"<<endl;
        cin>>data;
        arr.push_back(data);
    }

    int size = arr.size();

    for(int i=0;i<size;i++){
        cout<<arr.at(i)<<endl;
    }

    return 0;
}