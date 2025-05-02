#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;


int main() {
    int n, q, position;
    cin >> n >> q;
    
    vector<vector<int>>arr(n);
    
    for (int i = 0; i < n; i++){
        int k;
        cin >> k;
        
        vector<int>temp(k);
        
        for(int j = 0; j < k; j++){
            cin >> temp[j];
        }
        arr[i] = temp;
    }   
    for(int i = 0; i < q; i++){
        int x, y;
        cin >> x >> y;
        
        position = arr[x][y];
        cout << position << endl;
    }
    
    return 0;
}
