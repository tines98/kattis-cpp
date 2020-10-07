#include <iostream>
using namespace std;

int main(){
    int t=0,c=0,g=0;
    string inp;
    cin >> inp;
    for (int i = 0; i < inp.length(); i++){
        char x = inp.at(i);
        if (x == 'T') t++;
        if (x == 'C') c++;
        if (x == 'G') g++;
    }
    int ex = min(t,min(c,g))*7;
    int tot = t*t + c*c + g*g + ex;
    cout << tot << endl;
    return 0;
}