#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, tot=0;
    cin >> n;
    for (int i = 0; i < n; i++){
        int p;
        cin >> p;
        tot += pow(p/10,p%10);
    }
    cout << tot << endl;
    return 0;
}