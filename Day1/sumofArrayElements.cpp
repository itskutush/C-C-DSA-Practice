#include <iostream>


void sum_of_elements(int n,int arr[]){
    int sum = 0;
    for (int i = 0;i<n;i++){
        sum+=arr[i];
    }
    printf("%d",sum);
}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sum_of_elements(n,arr);

 
  
}
