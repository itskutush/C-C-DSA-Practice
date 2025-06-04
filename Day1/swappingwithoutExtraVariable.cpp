#include <iostream>
using namespace std;
int main()
{
    int num1 = 6;
    int num2 = 8;
    num1 = num1^num2;
    num2 = num1^num2;
    num1 = num1^num2;
    
    cout<<"num1"<<num1;
    cout<<"num2"<<num2;
    
}
