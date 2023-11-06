#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long long int n;
    scanf("%lld", &n); 
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int z,b;
    scanf("%d %d", &z, &b);
    arr[z] = b;
    for (int i = (n-1); 0 <= i; i--)
    {
        printf("%d ", arr[i]);
    }
    
    
    return 0;
}
