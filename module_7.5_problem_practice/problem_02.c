#include <stdio.h>
int main(){
    long long int n;
    scanf("%lld", &n);
    long long int arr[n];
    long long int m;
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    scanf("%lld", &m);

    int result = -1;
    for (int i = 0; i < n; i++)
    {
        if(m == arr[i]){
            result = i;
            break;
        }
    }
    printf("%d\n", result);
    return 0;
}