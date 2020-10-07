#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool is_sorted(vector<int> v, int n){
    for (int i = 0; i < n-1; i++){
        if (v[i] > v[i+1]) return false;
    }
    return true;
}

bool swap(vector<int> v, int n, int a, int b){
    int len = ((b-a)+1);
    for (int i = 0; i < len/2; i++){
        int temp = v[a+i];
        v[a+i] = v[b-i];
        v[b-i] = temp;
    }
    return is_sorted(v,n);
}

int main(){
    int n;
    cin >> n;
    vector<int> v;
    vector<int> vs;
    for (int i = 0; i < n; i++){
        int vt;
        cin >> vt;
        v.push_back(vt);
        vs.push_back(vt);
    }
    sort(vs.begin(),vs.begin()+n);
    int start=-1,end=-1;
    for (int i=0; i < n; i++){
        if (start==-1){
            if (v[i] != vs[i]){
                start=i;
            }
        }
        else{
            if (v[i] == vs[i]){
                end=i-1;
                break;
            }
        }
    }
    if (start==end){
        cout << "1 1";
    }
    else if (swap(v,n,start,end)){
        cout << start+1 << " " << end+1 <<endl;
    }
    else {
        cout << "impossible" <<endl;
    }

    return 0;
}