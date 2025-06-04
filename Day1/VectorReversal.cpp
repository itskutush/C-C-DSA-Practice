#include <iostream>
#include <vector>
#include <stdlib.h>
#include <string>
using namespace std;
int main(){
    vector<string> names;
    string name;
    for (int i = 0; i < 5; ++i) {
        getline(cin, name);
        names.push_back(name);
    }
    for (int i = 5;i>=0;i--){
        cout<<" "<<names[i];
    }

}
