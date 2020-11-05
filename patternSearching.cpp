#include<string>
#include<iostream>
#include<stdlib.h>

/*using namespace std;

void patternSearch(string &para, string &pattern){
    int m = para.length();
    int n = pattern.length();

    for(int i = 0 ; i <= (n-m) ; i++){
        int j;

        for(j = 0 ; j < m ; j++)
            if(pattern[j] != para[i+j])
                break;


        if(j == m)
            cout << "Index " << i << endl;
    }
}

int main(){
    string para;
    string pattern;

    cout << "Enter the paragraph : " << endl;
    cin >> para;

    cout << "Enter the pattern : " << endl;
    cin >> pattern;

    patternSearch(para, pattern);

    return 0;
}
*/

using namespace std; 

void patSearchinng(string &txt,string &pat){
    int m=pat.length();
    int n=txt.length();
    for(int i=0;i<=(n-m);i++){
        int j;
        for(j=0;j<m;j++)
        if(pat[j]!=txt[i+j])
        break;
        
        if(j==m)
        cout<<i<<" ";
    }
}
 
int main() 
{ 
    string txt = "ABCABCD";string pat="ABCD";
    cout<<"All index numbers where pattern found:"<<" ";
    patSearchinng(txt,pat);
    
    return 0; 
} 