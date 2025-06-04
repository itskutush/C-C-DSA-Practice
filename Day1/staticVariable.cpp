#include <iostream>

int staticOrNot(int num1){
    static int count = 10;
    if (num1>5){
        count+=1;
    }
     else if (num1<5){
         count-=1;
     }
     return count;

}



int main()
{
   int num1;
   scanf("%d",&num1);
   printf("%d",staticOrNot(num1));
}
