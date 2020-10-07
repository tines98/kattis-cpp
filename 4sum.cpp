#include <iostream>
using namespace std;


bool findFour(int start, int arr[], int n, int goal, int num, int four[]){
    if (goal == 0 && num == 0) return true;
    else if (goal == 0) return false;
    if (start == n) return false;
    if (findFour(start+1,arr,n,goal-arr[start],num-1,four)){
        four[4-num] = arr[start];
    }
    else{
        findFour(start+1,arr,n,goal,num,four);
    }
}

int main(){
    int a[10] = {0,1,2,3,4,5,6,7,8,9};
    int n = sizeof(a) / sizeof(a[0]);
    int goal = 25;
    int four[4] = {0,0,0,0};
    findFour(0,a,n,goal,4, four);
    cout << four[0] << four[1] << four[2] << four[3] << endl;
}