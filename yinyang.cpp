#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    if (s.length() % 2 == 0) cout << 1 << endl;
    else cout << 0 << endl;
    return 0;
}