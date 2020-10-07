#include <iostream>
#include <string>
using namespace std;

int main(){
    string jon, doc, result;
    cin >> jon >> doc;
    jon.length() >= doc.length() ? result = "go" : result = "no";
    cout << result;
    return 0;
}