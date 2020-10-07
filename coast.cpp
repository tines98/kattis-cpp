#include <iostream>
using namespace std;

int h;
int w;
int map[1002][1002];
bool boolMap[1002][1002];
int sum=0;

bool canGo(int x, int y){
    if (x >= w+2 || y >= h+2) return false;
    if (x<0 || y<0) return false;
    if (boolMap[y][x]) return false;
    return true;
}

void dfs(int x, int y){
    if (map[y][x]==1){
        sum++;
        return;
    }
    boolMap[y][x]=true;
    if (canGo(x+1,y)){
        dfs(x+1,y);
    }
    if (canGo(x,y+1)){
        dfs(x,y+1);
    }
    if (canGo(x-1,y)){
        dfs(x-1,y);
    }
    if (canGo(x,y-1)){
        dfs(x,y-1);
    }
}

void initMap(){
    for (int y = 0; y < h+2; y++){
        for (int x = 0; x < w+2; x++){
            map[y][x]=0;
            boolMap[y][x]=false;
        }
    }
}

int main(){
    cin >> h >> w;
    initMap();
    for (int y = 0; y < h; y++){
        string line;
        cin >> line;
        for (int x = 0; x < w; x++){
            if (line.at(x) == '1')
                map[y+1][x+1] = 1;
            else map[y+1][x+1] = 0;
        }
    }
    dfs(0,0);
    cout << sum << endl;
    return 0;
}
