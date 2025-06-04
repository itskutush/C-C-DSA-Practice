#include <iostream>
#include <vector>
#include <stdlib.h>
#include <string>
#include <algorithm>
using namespace std;

int buyAndSell(vector<int>v1){
    sort(v1.begin(),v1.end());
    int n = v1.size();
    int maxProfit = v1[n-1] - v1[0];
    return maxProfit;
}

int main(){
    vector<int>v1 ={22,45,18,90,1,46,200};
    int ans = buyAndSell(v1);
    printf("%d",ans);
}
