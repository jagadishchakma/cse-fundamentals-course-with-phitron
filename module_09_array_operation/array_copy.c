#include <stdio.h>
int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n],b[m];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        
    }
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
        
    }
    int length = (n+m);
    int arr[length];
    int count = 0;
    for (int i = 0; i < length; i++)
    {
        
        if(i < n){
            arr[i] = a[i];
        }else{
            arr[i] = b[count];
            count++;
        }
    }
    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    
    
    
    getchar();
}