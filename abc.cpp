#include <iostream>
using namespace std;

int middle(int x, int y, int z){
    int res;
    if (x<max(y,z)&&x>min(y,z)) res=x;
    else if (y<max(x,z)&&y>min(x,z)) res=y;
    else res=z;
    return res;
}


int main(){
    int x,y,z;
    cin >> x >> y >> z;
    int a = min(x,min(y,z));
    int b = middle(x,y,z);
    int c = max(x,max(y,z));
    string ordr;
    cin >> ordr;
    if (ordr == "ABC") cout << a << " " << b << " " << c << " " << endl;
    else if (ordr == "ACB") cout << a << " " << c << " " << b << endl;
    else if (ordr == "BAC") cout << b << " " << a << " " << c << endl;
    else if (ordr == "BCA") cout << b << " " << c << " " << a << endl;
    else if (ordr == "CAB") cout << c << " " << a << " " << b << endl;
    else if (ordr == "CBA") cout << c << " " << b << " " << a << endl;
    return 0;
}