#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    double n, k;
    cin >> n >> k;
    if (pow(2,k) >= n){
        cout << "Your wish is granted!";
    }
    else {
        cout << "You will become a flying monkey!";
    }
}