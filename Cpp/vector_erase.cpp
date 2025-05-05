#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> v1;
    int tamanho1;
    
    vector<int> v2;
    int tamanho2 = v2.size();
    tamanho2 = 2;
    
    int excluir;

    cin >> tamanho1;
    for (int n = 0; n < tamanho1; n++) {
        int num1;
        cin >> num1;
        v1.push_back(num1);
    }
    
    cin >> excluir;
    v1.erase(v1.begin()+ (excluir-1));

    for (int n = 0; n < tamanho2; n++) {
        int num2;
        cin >> num2;
        v2.push_back(num2);
    }
    
    v1.erase(v1.begin() + (v2[0]-1), v1.begin() + (v2[1]-1));
    
    cout << v1.size() << endl;
    for (int n = 0; n < v1.size(); n++) {
        cout << v1[n] << " ";
    }
    cout << endl;

    return 0;
}
