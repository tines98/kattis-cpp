#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream infile("sau.txt");
    int overflow,days,a;
    int dragonSize = 50;
    int hungerDays = 5;
    string as = "";
    while (true) {
        infile >> as;
        a = stoi(as);
        overflow = (overflow+a)-dragonSize;
        if (overflow < 0){
            hungerDays--;
            dragonSize--;
            overflow = 0;
            if (hungerDays==0)
                break;
        } else {
            hungerDays = 5;
            dragonSize++;
        }
        days++;
    }
    cout << days;
    return 0;
}