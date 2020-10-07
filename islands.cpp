#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int r, c;
    cin >> r >> c;
    int ans=0;
    for (int i = 0; i < r; i++){
        string d;
        cin >> d;
        for (int j = 1; j < d.length()-1; j++){
            char m = d.at(j);
            for (int k = j+1; k < d.length(); k++){
                m = min(m, d.at(k-1));
                if (d.at(j-1) < m && d.at(k) < m){
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}