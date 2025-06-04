#include <iostream>
#include <string.h>
using namespace std;

int main(){
    string s1 = "Practicing";
    string s2 = "practicing";
    string s3 = "Practicing";
    
    if (s1 == s2){
        printf("s1 and s2 are matching strings");
    }
    else if (s1 == s3){
        printf("s1 and s3 are matching strings");
    }
    else {
        printf("No matching strings");
    }
    
}
