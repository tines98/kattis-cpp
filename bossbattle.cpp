#include <iostream>
using namespace std;

int main(){
    int n,bombs=0;
    cin >> n;
    if (n <= 3){     
        cout << 1;
        return 0;
    }
    while (n>1){
        bombs++;
        n -= 3;
        if (n<1) break;
        n += 2;
    }
    cout << bombs;
    return 0;
}