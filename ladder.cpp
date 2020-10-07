#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int h, v;
    cin >> h >> v;
    
    cout << ceil(h/sin(v*M_PI/180))<< endl;
    return 0;
}