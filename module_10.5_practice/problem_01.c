#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld",&arr[i]);
    }

    int min=arr[0];
    int max=arr[0];
    for (int i = 0; i < n; i++)
    {
        if(arr[i] < min){
            min = arr[i];
        }
        if(arr[i] > max ){
            max = arr[i];
        }
    }
    long long int arr2[n];
    for (int i = 0; i < n; i++)
    {
       if (min == arr[i])
       {
        arr2[i] = max;
       }else if(max == arr[i]){
        arr2[i] = min;
       }else{
        arr2[i] = arr[i];
       }
       
    }
    for (int i = 0; i < n; i++)
    {
        printf("%lld ", arr2[i]);
    }
    
    
    
    getchar();
}