#include <iostream>
using namespace std;

int values[(1<<19)];
int n;

int step(int depth, int curr, int &nodes){
    if (depth==n){
        nodes = 1;
        return values[curr];
    }
    int left_nodes, right_nodes;
    int left = step(depth+1,curr,left_nodes);
    int right = step(depth+1,curr | (1<<depth), right_nodes);
    if ((left | right) == 3){
        nodes = left_nodes+right_nodes+1;
    }
    else{
        nodes = 1;
    }
    return (left | right);
}


int main(){
    cin >> n;
    for (int i = 0; i < (1<<n); ++i){
        int d;
        cin >> d;
        values[i] = (1<<d);
    }
    int nodes;
    step(0, 0, nodes);
    cout << nodes << endl;
    return 0;
}