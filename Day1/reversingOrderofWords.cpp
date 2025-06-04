#include <iostream>
#include <vector>
#include <stdlib.h>
#include <string>
#include <algorithm>

using namespace std;

vector<string>reverseArray(vector<string>words){
    reverse(words.begin(),words.end());
    return words;
}


int main(){
    vector<string>words = {"Hello","World","C","Plus","Plus"};
    vector<string>ans = reverseArray(words);
    for (int i = 0;i<ans.size();i++){
        cout<<ans[i];
    }  
  
}
    
