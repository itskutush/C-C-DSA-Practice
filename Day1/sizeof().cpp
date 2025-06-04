#include <iostream>
using namespace std;

int main()
{
   int num = 8;
   int arr[3] = {1,2,3};
   char op = '+';
   char alpha = 'A';
   string s = " ";
   int* arrp = arr;
   
   printf("%lu\n",sizeof(num));
   printf("%lu\n",sizeof(alpha));
   printf("%lu\n",sizeof(op));
   printf("%lu\n",sizeof(s));
   printf("%lu\n",sizeof(arr));
   printf("%lu\n",sizeof(arrp));
    return 0;
}
