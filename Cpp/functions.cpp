#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;

 int the_greatest (int u, int v, int x, int y){
    int greatest = u;
    
    if (v > greatest){
        greatest = v;
    }
    if (x > greatest){
        greatest = x;
    }
    if (y > greatest){
        greatest = y;
    }
    
    return greatest;
} 
int main() {
    int a, b, c, d;
    
    cin >> a >> b >> c >> d;
    cout << the_greatest(a, b, c, d);
    return 0;
}
