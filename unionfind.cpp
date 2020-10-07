#include <iostream>
#include <vector>
using namespace std;

class UnionFind{
    public:
    static vector<int> size;
    static vector<int> parent;

    static void setSize(int n){
        size.resize(n);
        parent.resize(n);
        size.assign(n,1);
        for (int i = 0; i < n; i++){
            parent[i] = i;
        }
    }

    static int find(int a){
        while (a != parent[a]){
            a = parent[a];
        }
        return a;
    }

    static void un(int a, int b){
        int rootA = find(a);
        int rootB = find(b);
        if (rootA == rootB) return;
        if (size[rootA] < size[rootB]) {
            parent[rootA] = rootB;
            size[rootA] += size[rootB];
        } else {
            parent[rootB] = rootA;
            size[rootA] += size[rootB];
        }
    }

    
};

int main(){
    int n, q;
    cin >> n >> q;
    UnionFind::setSize(n);
    for (int i = 0; i < q; i++){
        char op;
        int a, b;
        cin >> op >> a >> b;
        if (op == '?'){
            if (UnionFind::find(a) == UnionFind::find(b)){
                cout << "yes" << endl;
            } else {
                cout << "no" << endl;
            }
        } else {
            UnionFind::un(a,b);
        }
    }
    return 0;
}