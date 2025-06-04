#include <iostream>

int main()
{
    int m ;
    scanf("%d",&m);
    int n;
    scanf("%d",&n);
    int arr[m][n];
    for (int i = 0;i<m;i++){
        for (int j = 0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    
    for (int i = 0;i<m;i++){
        for (int j = 0;j<n;j++){
            printf("%d",arr[i][j]);
        }
    }
}
