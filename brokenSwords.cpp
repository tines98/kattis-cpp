#include <iostream>
#include <string>
using namespace std;

void bruh(int &tb, int &lr){
    string bruh;
    bruh = scanf("%s",&bruh);
    if (bruh[0] == '0') tb++;
    if (bruh[1] == '0') tb++;
    if (bruh[2] == '0') lr++;
    if (bruh[3] == '0') lr++;
}

int main(){
    int lines,tb=0,lr=0,swords;
    lines = scanf("%d",&lines);
    for (int i = 0; i < lines; i++)
    {
        bruh(tb,lr);
    }
    swords = min(tb,lr)/2;
    tb = tb - swords*2;
    lr = lr - swords*2;
    printf("%d %d %d",swords,tb,lr);
    return 0;
}

