#include <iostream>
#include <vector>
using namespace std;

int manmin(int p, int lower, int upper){
    if (p<lower) return lower;
    else if (p>upper) return upper;
    else return p;
}

int manmindist(int px, int py, int minx, int miny, int maxx, int maxy){
    int sx,sy;
    sx = manmin(px,minx,maxx);
    sy = manmin(py,miny,maxy);
    return abs(px-sx) + abs(py-sy);
}

int manmax(int p, int lower, int upper){
    if (abs(upper-p)>abs(lower-p))return upper;
    else return lower;
}

int manmaxdist(int px, int py, int minx, int miny, int maxx, int maxy){
    int sx,sy;
    sx = manmax(px,minx,maxx);
    sy = manmax(py,miny,maxy);
    return abs(px-sx) + abs(py-sy);
}

int main(){
    int n,q,px,py;
    cin >> n >> q >> px >> py;
    vector<int> dist_list(q);
    dist_list.assign(q,0);
    
    for (int i = 0; i < n; i++){
        int x1,y1,x2,y2,mind,maxd;
        cin >> x1 >> y1 >> x2 >> y2;
        int minx,maxx,miny,maxy;

        minx = min(x1,x2);
        maxx = max(x1,x2);
        miny = min(y1,y2);
        maxy = max(y1,y2);

        mind = manmindist(px,py,minx,miny,maxx,maxy);
        maxd = manmaxdist(px,py,minx,miny,maxx,maxy);
        for (int i = mind; i <= maxd; i++){
            dist_list[i]++;
        }
    }

    for (int i = 0; i < q; i++){
        int d;
        cin >> d;
        cout << dist_list[d] << endl;
    }

    return 0;
}