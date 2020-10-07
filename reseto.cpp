#include "iostream"
#include "string"
using namespace std;

int reseto(int list[], int n, int k, int t, int bok){
    int p = list[bok];
    k--;
    for (int i = 0; i < n; i++){
        if (k == 0) return t;
        if (list[i]%p == 0){ 
            t = list[i];
            list[i] = 1;
            k--;
        }
    }
    return reseto(list,n,k,t,bok+1);
}

int main(){
    int n, k, result;
    cin >> n >> k;
    int listo[n-1];
    for (int i = 0; i < n-1; i++){
        listo[i] = i+2;
    }
    cout << reseto(listo,(n-1),k,0,0);
    return 0;
}