#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int b; 
        double p;
        cin >> b >> p;
        double x,y,z;
        x = 60*(b-1)/p;
        y = 60*(b)/p;
        z = 60*(b+1)/p;
        cout << x << " " << y << " " << z << endl;
    }
    return 0;
}