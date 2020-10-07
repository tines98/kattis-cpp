#include <iostream>
using namespace std;

int findRoot(int list[], int a){
    if (list[a] < 0){
        return a;
    }
    findRoot(list,list[a]);
    return list[a];
}

int what(int list[], int a, int b){
    list[findRoot(list, b)] = findRoot(list, a);
    return 0;
}

bool isUnion(int list[], int a, int b){
    return findRoot(list, a) == findRoot(list, b);
}

int main(){
    int n,q;
    cin >> n >> q;
    int list[n+1];
    string result = "";

    for (int i = 0; i <= n; i++){
        list[i]=-1;
    }
    
    for (int i = 0; i < q; i++){
        char s;
        int a, b;
        cin >> s >> a >> b;
        if (s=='?'){
            if (isUnion(list, a, b)){
                result += "yes\n";
            }
            else {
                result += "no\n";
            }

        }
        else if (s=='='){
            what(list,a,b);
        }
    }
    cout << result;
    return 0;
}