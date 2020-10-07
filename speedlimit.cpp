#include <iostream>
using namespace std;

int getMiles(int n){
    int sum=0,last=0;
    for (int i = 0; i < n; i++){
        int speed, hrs;
        cin >> speed >> hrs;
        sum += speed*(hrs-last);
    }
    return sum;
}

int main(){
    while (true){
        int n;
        cin >> n;
        if (n == -1) break;
        else {
            
        }
    }
    return 0;
}