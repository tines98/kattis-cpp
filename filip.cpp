#include <iostream>
using namespace std;

int reverseNum(int n){
    int res=0, remain=0;
    while (n != 0){
        remain = n%10;
        res = res*10 + remain;
        n /= 10;
    }
    return res;
}

int main(){
    int a,b;
    cin >> a >> b;
    a = reverseNum(a);
    b = reverseNum(b);
    cout << max(a,b) << endl;
    return 0;
}