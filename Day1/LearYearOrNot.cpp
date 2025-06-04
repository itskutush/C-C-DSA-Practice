#include <iostream>
using namespace std;

int main(){
    int year = 2550;
    if ((year%4==0)&&(year%100!=0)||(year%400==0)){
        printf("The year is a leap year");
    }
    else{
        printf("it is not a leap year");
    }
}

