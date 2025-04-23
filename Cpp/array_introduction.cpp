#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int i;
    scanf("%d", &i);
    int nums[i];   
    
    for(int n = 0; n < i; n++){
        scanf("%d", &nums[n]);
    }
    
    for(int m = i - 1; m >= 0; m--){
        printf("%d ", nums[m]);
    }
    
    return 0;
}
