#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int fsoma (int a, int b){
    int soma;
    soma = a + b;
    
    return soma;
}

int fsub (int a, int b){
    int sub;
    
    if (a > b) {
        sub = a - b;
    }
    
    else {
        sub = b - a;
    }
    return sub;
} 

int main() {
    int a, b;
    
    cin >> a;
    cin >> b;
    
    cout << fsoma(a, b) << endl;
    cout << fsub(a, b);
    return 0;
}
