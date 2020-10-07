#include <iostream>
using namespace std;


float aboveAvg(){
    int students;
    float total=0,above=0, avg, result;
    cin >> students;
    float scores[students];
    for (int i = 0; i < students; i++){
        int num;
        cin >> num;
        scores[i] = num;
        total += num;
    }
    avg = total / students;
    for (int i = 0; i < students; i++){
        if (scores[i] > avg) above++;
    }
    result = (above/students)*100;
    return result;
}

int main(){
    int testCases;
    cin >> testCases;
    for (int i = 0; i < testCases; i++)
    {
        cout.setf(ios::fixed,ios::floatfield);
        cout.precision(3);
        if (i == testCases-1){
            cout << aboveAvg() << "\%";
        } else{
            cout << aboveAvg() << "\%" << endl;
        }
    }
}