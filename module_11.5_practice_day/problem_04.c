#include <stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n, &m);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int count[n] = {0};
    for (int i = 0; i < n; i++)
    {
        int v = arr[i];
        count[v]++;
    }
    for (int i = 0; i < m+1; i++)
    {
        if(count[i] > 0){
            printf("%d\n",count[i]);
        }
    }
    
    
    
    getchar();
}