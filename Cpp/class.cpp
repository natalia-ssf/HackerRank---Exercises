#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Student{
    private:
        int age, standard;
        string first_name, last_name;
    
    public:
        void set_age(int a) {
            age = a;
        }
        int get_age() {
            return age;
        }
        
        void set_standard(int s) {
            standard = s;
        }
        int get_standard() {
            return standard;
        }
        
        void set_first_name(string fn) {
            first_name = fn;
        }
        string get_fn() {
            return first_name;
        }
        
        void set_last_name(string ln) {
            last_name = ln;
        }
        string get_ln() {
            return last_name;
        }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age;
    cin >> first_name;
    cin >> last_name;
    cin >> standard;
    
    Student student;
    
    student.set_age(age);
    student.set_standard(standard);
    student.set_first_name(first_name);
    student.set_last_name(last_name);
    
    cout << student.get_age() << endl;
    cout << student.get_ln() << ", " << student.get_fn() << endl;
    cout << student.get_standard() << endl << endl;
    
    cout << student.get_age() << "," << student.get_fn() << "," << student.get_ln() << "," << student.get_standard();
    
    return 0;
}
