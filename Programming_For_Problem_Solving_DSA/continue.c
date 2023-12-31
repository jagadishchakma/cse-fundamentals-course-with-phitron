#include<stdio.h>
int main(){
    int n = 10;
    for (int i = 0; i <= n; i++)
    {
        if(i == 5 || i == 2 || i == 8) continue;
        printf("%d ",i);
    }
    
    return 0;
}