#include <iostream>
#include <cmath>
using namespace std;

long long int fibb(long long int x){
    return ((pow(((1+sqrt(5))/2),x) - pow(((1-sqrt(5))/2),x))/sqrt(5));
}

int main(){
    long long int digit;
    cin >> digit;
    long long int sum=fibb(digit);
    cout << sum << endl;
    return 0;
}