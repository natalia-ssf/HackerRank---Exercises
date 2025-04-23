#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    for(int n = a; n <= b; n++){
        if(n >= 1 && n <= 9){
            if(n == 1){
                printf("one\n");
            } 
            if(n == 2){
                printf("two\n");
            } 
            if(n == 3){
                printf("three\n");
            } 
            if(n == 4){
                printf("four\n");
            } 
            if(n == 5){
                printf("five\n");
            } 
            if(n == 6){
                printf("six\n");
            } 
            if(n == 7){
                printf("seven\n");
            } 
            if(n == 8){
                printf("eight\n");
            } 
            if(n == 9){
                printf("nine\n");
            }
        } 
        if(n > 9){
            if(n % 2 == 0){
                printf("even\n");
            } 
            if(n % 2 != 0){
                printf("odd\n");
            }
        }
    }

    return 0;
}
