#include <iostream>
using namespace std;

int radio(int arr[], int p, int n){
    int hi = n-1;
    int lo = 0;
    while(true){
        if (arr[hi] <= 0){
            hi--;
        }
        else break;
    }
    while (true){
        if (arr[lo] <= 0){
            lo++;
        }
        else break;
    }
    int maxEndingHere = arr[lo];
    int maxSoFar = arr[lo];
    for (int i = lo; i <= hi; i++){
        maxEndingHere = max(arr[i],maxEndingHere+arr[i]);
        maxSoFar = max(maxSoFar, maxEndingHere);
    }
    return maxSoFar;
}


int main(){
    int n, p;
    cin >> n >> p;
    int arr[n];
    for (int i = 0; i < n; i++){
        int t;
        cin >> t;
        arr[i] =  t-p;
    }
    int res = radio(arr,p,n);
    cout << res << endl;
    return 0;
}