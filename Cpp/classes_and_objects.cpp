#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;

class Student{
    private:
        int scores[5];
    
    public:
        void input(){
            for(int n = 0; n < 5; ++n){
                cin >> scores[n];
            }
        }
    
        int calculateTotalScore(){
            int total = 0;
            for(int n = 0; n < 5; ++n){
                total+= scores[n];
            }
            return total;
        }
};

int main() {
    int num;
    cin >> num;
    
    vector<Student> students(num);
    vector<int> totalScores(num);
    
    for(int n = 0; n < num; ++n){
        students[n].input();
        totalScores[n] = students[n].calculateTotalScore();
    }
    
    int maxScore = totalScores[0];
    int higher = 0;
    
    for (int n = 1; n < num; ++n) {
        if (totalScores[n] > maxScore){
            maxScore = totalScores[n];
            higher = n;
        }
    }
    
    cout << higher;
       
    return 0;
}
