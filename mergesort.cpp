#include <iostream>
using namespace std;


void printArray(int l[], int n){
    cout << "bruh" <<endl;
    for (int i = 0; i < n; i++){
        cout << l[i] << ", " ;
    }
    cout << endl;
}


void swap(int arr[], int i, int j){
    int k = arr[i];
    arr[i] = arr[j];
    arr[j] = k;
}

void mergeSort(int arr[], int lo, int hi){
    if (hi-lo==1) return;
    if (hi-lo==2){
        if (arr[lo] > arr[hi]) 
            swap(arr,lo,hi);
        return;
    }
    int mid = (hi-lo)/2;
    mergeSort(arr,lo,mid);
    mergeSort(arr,mid+1,hi);
}

int main(){
    int n = 10;
    int a[n] = {0,5,9,2,3,1,4,7,5,8};
    mergeSort(a,0,n-1);
    printArray(a,n);
    return 0;
}