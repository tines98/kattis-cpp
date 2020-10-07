#include <iostream>
using namespace std;


string bat(int n, unsigned long long k, unsigned long long fibs[]){
    if (n==1) return "N";
    if (n==2) return "A";
    unsigned long long l = fibs[n-2];
    return l < k ? bat(n-1,k-l,fibs) : bat(n-2,k,fibs);
}

int main(){
    int n;
    unsigned long long k;
    unsigned long long fibs[88];
    fibs[0] = 0;
    fibs[1] = 1;
    for (int i = 2; i < 88; i++){
        fibs[i] = fibs[i-2] + fibs[i-1];
    }
    cin >> n >> k;
    n = n > 89 ? 89 : n;
    cout << bat(n,k,fibs) << endl;
    return 0;
}