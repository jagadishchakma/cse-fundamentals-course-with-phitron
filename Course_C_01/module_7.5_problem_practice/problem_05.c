#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    long long int min = arr[0];
    int pos = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            pos = i+1;
        }
    }

    printf("%lld %d", min, pos);
    
    
    return 0;
}