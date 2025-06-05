#include <iostream>
#include <vector>
#include <stdlib.h>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int arr1 [5] = {1,2,99,4,5};
    int target = 99;
    bool flag = false;
    for (int i = 0;i<5;i++){
        if (arr1[i] == target){
            flag = true;
        }
    }
    
    if (flag == true){
        printf("Target found");
    }
    else {
        printf("Target not found");
    }
}
    
//Time complexity of binary search : O(log n)    
    


    
    


