#include <iostream>
#include <string.h>
using namespace std;

int main(){
    string s1 = "Practicing";
    int n = s1.length();
    for (int i = 0;i<s1.length();i++){
        if (s1[i] == 'i'){
            s1[i] = s1[-1];
        }
        
        printf("%c",s1[i]);
    }
}
