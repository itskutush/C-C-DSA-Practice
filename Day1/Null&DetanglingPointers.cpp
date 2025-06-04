#include <iostream>
#include <stdlib.h>
using namespace std;


void increment_pointer(int* ptr){
    *ptr = *ptr+1;
    printf("Value of ptr updated to : %d\n",*ptr);
    printf("Memory address of the pointer : %p\n",ptr);
}


int main()
{
    //Detangling pointers
    int *ptr = (int*)malloc(sizeof(int));
    *ptr = 5;
    printf("Memory address the ptr is pointing at : %p\n",ptr);
    printf("Value stored in ptr : %d\n",*ptr);
    increment_pointer(ptr);
    free(ptr);
    *ptr = NULL;
    //*ptr = 98;
    printf("Memory address the ptr is pointing at : %p\n",ptr);
    printf("Value stored in ptr : %d\n",*ptr);
    
    return 0;
}
