#include <cmath>
#include <cstdio>
#include <string>
#include <iostream>
using namespace std;


int main() {
    string a, b;
    
    cin >> a;
    cin >> b;    
    
    string sum = a + b;
    
    int len_a = a.size(); 
    int len_b = b.size();
    
    char a0 = a[0];
    char b0 = b[0];
    string a_new = b0 + a.erase(0, 1); 
    string b_new = a0 + b.erase(0, 1);
    
    cout << len_a << " " << len_b << endl;
    cout << sum << endl;
    cout << a_new << " " << b_new;

       
    return 0;
}
