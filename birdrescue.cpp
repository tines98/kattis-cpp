#include <iostream>
#include <vector>
using namespace std;

// int manhatdist(vector<int> a, vector<int> b){
//     return abs(a[0]-b[0]) + abs(a[1]-b[1]);
// }

// int manhatdist2(vector<int> p, vector<vector<int>> ab){
//     return min(manhatdist(p,ab[0]),manhatdist(p,ab[1]))
// }

int distMin(vector<vector<int>> rect, vector<int> p){
    int dx = max(min(rect[0][0],rect[1][0]) - p[0] , p[0] - max(rect[0][0],rect[1][0]));
    int dy = max(min(rect[0][1],rect[1][1]) - p[1] , p[1] - max(rect[0][1],rect[1][1]));
    return abs(dx+dy);
}

int distMax(vector<vector<int>> rect, vector<int> p){
    int dx = min(min(rect[0][0],rect[1][0]) - p[0], p[0] - max(rect[0][0],rect[1][0]));
    int dy = min(min(rect[0][1],rect[1][1]) - p[1], p[1] - max(rect[0][1],rect[1][1]));
    return abs(dx+dy);
}

int howMany(int d, vector<int> p[],int n){
    int res=0;
    for (int i = 0; i < n; i++){
        if (d <= p[i][0] && d >= p[i][1]) res++;
    }
    return res;
}

int main(){
    int n, q, px, py;
    
    cin >> n >> q >> px >> py;
    vector<vector<int>> neigh[n];
    vector<int> distances[n];
    vector<int> polly;
    int calls[q];

    polly.assign(px,py);
    for (int i = 0; i <= n; i++){
        int x1,y1,x2,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        vector<int> temp1 (x1,y1), temp2 (x2,y2);
        neigh[i] = vector<vector<int>> (temp1,temp2);

        distances[i].assign(distMin(neigh[i],polly),distMax(neigh[i],polly));
    }
    cout << "two" << endl;
    for (int i = 0; i < q; i++){
        cin >> calls[i];
    }
    cout << "omg i want to die right now" << endl;
    for (int i = 0; i < q; i++){
        cout << howMany(calls[i],distances,n) << endl;
    }
    return 0;
    
}