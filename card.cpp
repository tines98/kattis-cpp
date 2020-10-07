#include <iostream>
using namespace std;

void printlist(int a[]){
    for (int i = 0; i < 5; i++){
        cout << a[i];
    }
    cout << endl;
}

int main(){
    int a[10] = {4,2,5,3,1};
    bool swapped = true;
    while (swapped){
        swapped = false;
        for (int i = 1; i < 5; i++){
            if (a[i-1] > a[i]){
                int t = a[i-1];
                a[i-1] = a[i];
                a[i] = t;
                swapped = true;
            }
            printlist(a);
        }
    }
    
    
    return 0;
}
