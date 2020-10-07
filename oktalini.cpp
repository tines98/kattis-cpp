#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int convertBinaryToOctal(long long binary){
    long long octalNum = 0, decimalNum = 0, i = 0;
    while (binary != 0){
        decimalNum += (binary%10) * pow(2,i);
        ++i;
        binary /= 10;
    }
    i = 1;
    while (decimalNum != 0){
        octalNum += (decimalNum%8) * i;
        decimalNum /= 8;
        i *= 10;
    }
    return octalNum;
}

int main(){
    long long binary;
    cin >> binary;
    string result = to_string(convertBinaryToOctal(binary));
    cout << result;
}