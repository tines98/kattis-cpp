#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int candies, power, lowestBill,result=0;
    cin >> candies >> power;
    lowestBill = pow(10,power);
    if (lowestBill == 1) result = candies;
    else if (candies % lowestBill >= lowestBill/2) result = candies + (lowestBill - (candies % lowestBill));
    else result = candies - (candies%lowestBill);
    cout << result;
    return 0;
}