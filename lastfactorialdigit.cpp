#include <iostream>
using namespace std;


int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int n,res;
        cin >> n;
        if (n==1) res=1;
        else if (n==2) res=2;
        else if (n==3) res=6;
        else if (n==4) res=4;
        else res=0;
        cout << res <<endl;
    }
    
    return 0;
}