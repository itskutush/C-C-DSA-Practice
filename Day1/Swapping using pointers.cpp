#include <iostream>
//swapping two integers using the pointers
int main()
{
   int num1 = 5;
   int *ptr = &num1;
   int num2 = 10;
   int * ptr1=&num2;
   int * temp = (int*)malloc(sizeof(int));
   printf("Value of ptr before swapping: %d\n",*ptr);
   printf("Value of ptr1 before swapping: %d\n",*ptr1);
    *temp = *ptr1;
    *ptr1 = *ptr;
    *ptr = *temp;
    printf("value of ptr after swapping %d\n",*ptr);
    printf("value of ptr1 after swapping :%d\n",*ptr1);

  
    return 0;
}
