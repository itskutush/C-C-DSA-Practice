#include <iostream>

int fibonacci(int n){
    if (n<=1){
        return n;
    }
    return fibonacci(n-1)+fibonacci(n-2);
    
}


int main(){
    int n = 9;
    int ans = fibonacci(n);
    printf("%d",ans);
}
