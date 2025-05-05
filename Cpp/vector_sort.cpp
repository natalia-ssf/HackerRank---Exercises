#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> v;
    int tamanho;

    cin >> tamanho;

    for (int n = 0; n < tamanho; n++) {
        int num;
        cin >> num;
        v.push_back(num);
    }

    sort(v.begin(), v.end());

    for (int n = 0; n < v.size(); n++) {
        cout << v[n] << " ";
    }

    return 0;
}
