#include <iostream>
//pass by value
int increment(int &a){
    int c = a;
    c=c+10;
   return c;
}

//pass by refernce
int decrement(int *a){
    int x = *a;
    x=x-1;
    return x;
}

int main()
{
    int a = 2;
   printf("%d",increment(a));
   printf("%d",decrement(&a));

}
