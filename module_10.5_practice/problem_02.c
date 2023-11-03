#include <stdio.h>
#include <string.h>
int main(){
    int n;
    scanf("%d", &n);
    char str[101];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", str);
        if(strlen(str) > 10){
            int f = strlen(str)-2;
            printf("%c",str[0]);
            printf("%d",f);
            printf("%c",str[strlen(str)-1]);
            printf("\n");
        }else{
            printf("%s",str);
            printf("\n");
        }
    }
    
    getchar();
}