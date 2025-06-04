#include <iostream>

using namespace std;

int main(){
    int num1 = 2;
    int num2 = 3;
    char op;
    scanf("%c",&op);
    switch(op){
        case '+':
            cout<<num1+num2;
            break;
        case '-':
            cout<<num1-num2;
            break;
        case '*':
            cout<<num1*num2;
            break;
        case '/':
            cout<<num1/num2;
            break;
        default:
            cout<<"Error";
    }

}
