#include <iostream>
using namespace std;

int main()
{
	int num1 = 4;
	int num2 = 245;
	int num3 = 33;
	if ((num1>num2)&&(num1>num3)) {
		cout<<"Greatest"<<num1;
	}
	else if ((num2>num3)&&(num2>num1)) {
		cout<<"Greatest"<<num2;
	}
	else {
		cout<<num3;
	}
	return 0;
}
