#include <stdlib.h>
#include <iostream>
#include <cmath>

using namespace std;

int countDig(int x){
    return log10(x) + 1;
}

int main(){
    int number = 0;
    int result = 0;

    cout << "Enter the number you want to count the digits of : " << endl;
    cin >> number;

    result = countDig(number);

    cout << "The number of digits : " << result << endl;

    return 0;
}