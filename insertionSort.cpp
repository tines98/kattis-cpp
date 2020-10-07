#include <iostream>
using namespace std;

void swap(int l[], int a, int b){
    int temp = l[a];
    l[a] = l[b];
    l[b] = temp;
}

void printArray(int l[], int n){
    for (int i = 0; i < n; i++){
        cout << l[i] << ", " ;
    }
    cout << endl;
}

void sort(int l[], int n){
    for (int i = 1; i < n; i++){
        for (int j = i; j > 0; j--){
            if (l[j] > l[j-1]) break;
            swap(l,j-1,j);
        }
    }
}




int main(){
    int n = 10;
    int l[n] = {9,1,8,2,7,3,6,4,5,0};
    printArray(l,n);
    sort(l,n);
    printArray(l,n);
    return 0;
}