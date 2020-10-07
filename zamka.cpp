#include <iostream>
using namespace std;
int main(){
    int l, d, x, n, m;
    cin >> l >> d >> x;
    for (int i = l; i <= d; i++){
        int s=0, y=i;
        while (y != 0){
            s += y % 10;
            y = y / 10;
        }
        if (s == x){
            n = i;
            break;
        }
    }
    for (int i = d; i >= l; i--){
        int s=0, y=i;
        while (y != 0){
            s += y % 10;
            y = y / 10;
        }
        if (s == x){
            m = i;
            break;
        }
    }
    cout << n << endl << m;
    return 0;
}