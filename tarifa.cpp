#include <iostream>
using namespace std;

int main(){
    int x, n,res=0;
    cin >> x >> n;
    res = x;
    for (int i = 0; i < n; i++){
        int p;
        cin >> p;
        res += x-p;
    }
    cout << res << endl;
    return 0;
}