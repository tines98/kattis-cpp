#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    long int a;
    cin >> a;
    double side = sqrt(a);
    cout << setprecision(20)<< 4 * side << endl;
    return 0;
}