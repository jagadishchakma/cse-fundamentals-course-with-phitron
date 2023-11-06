#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long long int n;
    scanf("%lld", &n); 
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
       scanf("%lld", &arr[i]);
    }
    for (int i = (n-1); 0 <= i; i--)
    {
        if(i%2 != 0){
            printf("%lld ",arr[i]);
        }

    }
    
    return 0;
}
