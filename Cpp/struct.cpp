#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;

struct Student {
        int age, standard;
        string first_name, last_name;
};

int main() {
    struct Student student;
    
    cin >> student.age >> student.first_name >> student.last_name >> student.standard;
    cout << student.age << " " << student.first_name << " " << student.last_name << " " << student.standard;
    
    return 0;
}