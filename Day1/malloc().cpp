#include <iostream>
#include <stdlib.h>
int main()
{
    int *ptr;
    int size;
    scanf("%d",&size);
    ptr = (int *)malloc(size*sizeof(int));
    for (int i = 0;i<size;i++){
        ptr[i] = i+10;
    }
    for (int i = 0;i<size;i++){
        printf("%d\n",ptr[i]);
    }

    return 0;
}
