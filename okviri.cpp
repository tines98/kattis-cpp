#include <iostream>
#include <string>
using namespace std;

int main(){
    string input,symbol,symbol2,res1,res2,res3,res4,res5;
    cin >> input;
    for (int i = 0; i < input.length(); i++)
    {
        i%3==2 ? symbol = "*" : symbol = "#";
        if (i%3==0 && i!=0) symbol2 = "*";
        else symbol2 = symbol;
        res1.append(".."+symbol+".");
        res2.append("."+symbol+"."+symbol);
        res3.append(symbol2+"."+input[i]+".");
        res4.append("."+symbol+"."+symbol);
        res5.append(".."+symbol+".");
    }    
    res1.append(".\n");
    res2.append(".\n");
    res3.append(symbol+"\n");
    res4.append(".\n"); 
    res5.append(".");
    cout << res1 << res2 << res3 << res4 << res5;
}