#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
        if(arr[i] > 0){
            arr[i] = 1;
        }else if(arr[i] < 0){
            arr[i] = 2;
        }
    }
    for (int i = 0; i < n; i++)
    {
       printf("%lld ", arr[i]);
    }
    
    
    return 0;
}