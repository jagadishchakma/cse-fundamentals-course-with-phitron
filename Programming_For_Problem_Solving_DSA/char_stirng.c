#include<stdio.h>
int main(){
    char a[15];
    for (int i = 0; i < 15; i++)
    {
        scanf("%c",&a[i]);
    }
    for (int i = 0; i < 15; i++)
    {
        printf("%c",a[i]);
    }
    
    
    return 0;
}