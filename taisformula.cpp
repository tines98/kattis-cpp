#include <iostream>
using namespace std;

double solve(int t[], double v[], int n){
    double tot = 0;
    for (int i = 0; i < n-1; i++){
        tot += ((v[i]+v[i+1])/2)*(t[i+1]-t[i]);
    }
    return tot/1000.0;
}

int main(){
    int n;
    cin >> n;
    int t[n];
    double v[n];
    for (int i = 0; i < n; i++){
        int tt;
        double vv;
        cin >> tt >> vv;
        t[i] = tt;
        v[i] = vv;
    }
    cout.precision(10);
    cout << solve(t,v,n) << endl;
    return 0;
}