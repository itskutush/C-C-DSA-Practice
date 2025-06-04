#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

bool check_anagram(){
    string s1 = "BAB";
    string s2 = "ABB";
    unordered_map<char,int>mpp;
    for (auto it : s1){
        mpp[it]++;
    }
    for (auto it : s2){
        mpp[it]--;
    }
    
    for (auto &pair : mpp){
        if (pair.second != 0){
           return false;
        }
    }
    return true;
}

int main(){
   bool s = check_anagram();
    printf("%b",s);
}

