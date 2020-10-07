#include <iostream>
#include <string>
using namespace std;


string printDart(int x){
    string result("");
    if (x != 0){
        if (x%3==0){ 
            result.append("triple "+to_string(x/3));
        }
        else if (x%2==0) result.append("double "+to_string(x/2));
        else result.append("single "+x);
    }
    return result;
}

int main(){
    int num,a,b,c,i,j,k;
    cin >> num;
    for (i = 20; i > 0; i--){
        for (j = 20; j > 0; j--){
            for (k = 20; k > 0; k--){
                for (a = 0; a <= 3; a++){
                    for (b = 0; b <= 3; b++){
                        for (c = 0; c <= 3; c++){
                            if (a*i + b*j + c*k == num){
                                cout << printDart(c*k) << "\n" << printDart(b*j) << "\n" << printDart(a*i);
                                return 0;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}