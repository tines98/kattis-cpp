#include <iostream>
using namespace std;

int getSum(int n){
    int sum=0;
    while (n != 0){
        sum = sum + int(n%10);
        n = int(n/10);
    }
    return sum;
}

int test(int n){
    int nSum=getSum(n);
    for (int i = 11; i < 100000; i++){
        if (getSum(n*i)==nSum) {
            return i;
        }
    }
}

int main(){
    while (true){
        int n;
        cin >> n;
        if (n==0) break;
        cout << test(n) << endl;
    }
    return 0;
}

