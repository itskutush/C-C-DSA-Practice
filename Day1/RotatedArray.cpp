#include <iostream>
#include <vector>
#include <stdlib.h>
#include <string>
#include <algorithm>
using namespace std;

vector<int>rotate(vector<int>v1,int k){
    k%=v1.size();
    reverse(v1.begin(),v1.end());
    reverse(v1.begin(),v1.begin()+k);
    reverse(v1.begin()+k,v1.end());
    return v1;
}

int main(){
    int k = 3;
    vector<int>v1 ={1,2,3,4,5};
    for (int i = 0;i<v1.size();i++){
        cout<<v1[i];
    }
    vector<int>ans = rotate(v1,k);
    for (int i=0;i<ans.size();i++){
        cout<<ans[i];
    }
}
