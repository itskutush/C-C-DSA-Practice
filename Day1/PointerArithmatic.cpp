#include <iostream>
using namespace std;
//Pointer arithmatic 
void increment_pointer(int *ptr){
    *ptr += 1;
    printf("Value the pointer pointing at after incrementing: %d\n",*ptr);
}
void decrement_pointer(int *ptr){
    *ptr -= 1;
    printf("Value the pointer is pointing at after decrementing: %d\n",*ptr);
}

void add_integer(int *ptr){
    *ptr = *ptr + 10;
    printf("Value the pointer is pointing at after adding the integer :%d\n",*ptr);
}

void sub_pointer(int *ptr,int *ptr1){
    *ptr = *ptr - *ptr1;
    printf("value of the pointer after substraction : %d\n",*ptr);
}

int main()
{
    int num1 = 10;
    int *ptr = &num1;
    int num2 = 2;
    int *ptr1 = &num2;
    increment_pointer(ptr);
    decrement_pointer(ptr);
    add_integer(ptr);
    sub_pointer(ptr,ptr1);

}
