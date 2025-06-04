#include <iostream>
//using calloc
using namespace std;
int main()
{
    int *ptr;
    ptr = (int *)calloc(10,sizeof(float));
    
    for (int i = 0;i<10;i++){
        ptr[i] = i+1;
    }
    
    for (int i = 0;i<10;i++){
        printf("%d",ptr[i]);
    }

    return 0;
}
