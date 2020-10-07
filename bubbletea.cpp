#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int cheapest_combo(int top_list[], vector<int> options, int l){
    int min = 1001;
    for (int i=0; i < l; i++){
        if (find(options.begin(), options.end(), i+1) != options.end()) {
            if (top_list[i] <= min) {
                min = top_list[i];
            }
        }
    }
    return min;
}

int main(){
    int n, m;
    cin >> n;
    int tea_prices[n];
    for (int i = 0; i < n; i++){
        cin >> tea_prices[i];
    }
    cin >> m;
    int topping_prices[m];
    for (int i = 0; i < m; i++){
        cin >> topping_prices[i];
    }
    vector<vector<int>> combos (n);
    for (int i = 0; i < n; i++){
        int amount;
        cin >> amount;
        for (int j = 0; j < amount; j++){
            int temp;
            cin >> temp;
            combos[i].push_back(temp);
        }
        
    }
    int money;
    cin >> money;
    int bub_tea = 0;
    for (int i = 0; i < n; i++){
        int cheapest_tea= tea_prices[i] + cheapest_combo(topping_prices,combos[i],m);
        int howMany = money/cheapest_tea;
        if (howMany > bub_tea) {
            bub_tea = howMany;
        }
    }
    cout << max(bub_tea-1, 0) << endl;
    return 0;
}