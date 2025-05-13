#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    virtual void getdata() {
        cin >> name >> age;
    }

    virtual void putdata() {
        cout << name << " " << age << endl;
    }
};

class Professor : public Person {
public:
    int publications;
    int cur_id;
    static int id;

    Professor() {
        cur_id = ++id;
    }

    void getdata() {
        cin >> name >> age >> publications;
    }

    void putdata() {
        cout << name << " " << age << " " << publications << " " << cur_id << endl;
    }
};

int Professor::id = 0;

class Student : public Person {
    public:
        static const int num_marks = 6;
        int marks[num_marks];
        int cur_id;
        static int id;

        Student() {
            cur_id = ++id;
        }

        void getdata() {
            cin >> name >> age;
            for (int i = 0; i < num_marks; ++i) {
                cin >> marks[i];
            }
        }

        void putdata() {
            int sum = 0;
            for (int i = 0; i < num_marks; ++i) {
                sum += marks[i];
            }
            cout << name << " " << age << " " << sum << " " << cur_id << endl;
        }
};

int Student::id = 0;

int main() {
    int n;
    cin >> n;

    vector<Person*> pessoas(n);

    for (int i = 0; i < n; ++i) {
        int tipo;
        cin >> tipo;

        if (tipo == 1) {
            pessoas[i] = new Professor();
        } 
        else {
            pessoas[i] = new Student();
        }

        (*pessoas[i]).getdata();
    }

    for (int i = 0; i < n; ++i) {
        (*pessoas[i]).putdata();
    }

    return 0;
}
