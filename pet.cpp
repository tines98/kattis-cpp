#include <iostream>
using namespace std;

int main(){
    int winner=0, points=0;
    for (int i = 0; i < 5; i++){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        if (a+b+c+d > points){
            points= a+b+c+d;
            winner = i+1;
        }
    }
    cout << winner << " " << points << endl;
    return 0;
}