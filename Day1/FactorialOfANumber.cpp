#include <iostream>


int fact(int n){
    if (n==1){
        return 1;
    }
    return n*fact(n-1);
}

int main()
{
  int n =6;
  int ans = fact(n);  
  printf("The factorial of %d is %d",n,fact(n));
  
}
