#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int iterations,result;
    cin >> iterations;
    result = pow((pow(2,iterations))+1,2);
    cout << result;
    return 0;
}