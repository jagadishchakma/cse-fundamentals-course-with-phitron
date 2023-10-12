#include <stdio.h>
int main(){
    long int n;
    scanf("%ld", &n);
    long long int arr[n];
    long long int summ = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
        summ += arr[i];
    }
    if (summ < 0)
    {
        printf("%lld\n", summ*-1);
    }else{
        printf("%lld\n", summ);
    }
    
    
    return 0;
}