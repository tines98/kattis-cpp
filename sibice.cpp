#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n,w,h,hyp;
    cin >> n >> w >> h;
    hyp = sqrt( pow(h,2) + pow(w,2) );
    for (int i = 0; i < n; i++){
        int m;
        cin >> m;
        if (m > max(int(hyp),max(w,h))){
            cout << "NE" <<endl;
        }
        else cout << "DA" << endl;
    }
    return 0;
}