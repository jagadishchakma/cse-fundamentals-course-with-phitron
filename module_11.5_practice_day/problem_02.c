#include <stdio.h>
int main(){
    long long int n;
    scanf("%lld",&n);
    char str[n];
    scanf("%s", str);
    long long int count = 0;
    for (int i = 0; i < n; i++)
    {
        int v = str[i]-48;
        count += v;
    }
    
    printf("%lld", count);
    getchar();
}