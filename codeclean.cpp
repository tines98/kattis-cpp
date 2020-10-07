#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int pushes[n];
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        pushes[i] = a; 
    }
    int countMult=0;
    int dirty=0;
    int cleans=0;
    for (int day = 0; day <= 365; day++)
    {
        if (dirty+countMult > 19){
            cleans++;
            dirty=0;
            countMult=0;
        }
        else {
            dirty += countMult;
        }
        for (int i = 0; i < n; i++)
        {
            if (day==pushes[i]){
                countMult++;
            }
        }
        
    }
    if (dirty>0 || countMult>0){
        cleans++;
    }
    
    cout << cleans;
    return 0;
}