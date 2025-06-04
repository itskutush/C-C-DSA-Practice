#include <iostream>
#include <vector>
#include <stdlib.h>
#include <string>
using namespace std;
int main(){
    vector<int>v1 = {1,2,3,4,5,6};
    cout<<v1.capacity()<<"\n";
    cout<<v1.size()<<"\n";
    v1.push_back(7);
    cout<<v1.capacity()<<"\n";
    cout<<v1.size()<<"\n";
    
}
