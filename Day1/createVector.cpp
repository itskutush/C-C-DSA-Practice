#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;
int main(){
    vector<int> v1;
    v1.push_back(3);
    v1.push_back(6);
    v1.push_back(9);
    v1.push_back(10);
    v1.push_back(13);
    
    for (auto it : v1){
        cout<<it;
    }
}
