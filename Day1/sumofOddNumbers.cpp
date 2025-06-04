#include <iostream>
using namespace std;

int main()
{
	int n ;
	int sum = 0;
	scanf("%d",&n);
	int i = 1;
	while (i<=n) {
		if(i%2!=0) {
			sum+=i;
		}
		i++;
	}
	printf("%d",sum);
}
