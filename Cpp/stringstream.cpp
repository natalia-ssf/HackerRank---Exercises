#include <cmath>
#include <cstdio>
#include <sstream>
#include <iostream>
#include <string>
using namespace std;


int main() {
    string entrada;
    cin >> entrada; 

    stringstream ss(entrada);
    int num;
    char separador;

    while (ss >> num) {
        cout << num << endl;
        ss >> separador;
    }

    return 0;
}