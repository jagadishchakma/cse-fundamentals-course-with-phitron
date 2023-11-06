#include <stdio.h>
#include <string.h>
int main(){
    char a[100],b[100];
    scanf("%s%s",a,b);
    int i = 0;
    while (1)
    {
        if (a[i] == '\0' && b[i] == '\0')
        {
           printf("a and b are same");
           break;
        }
        else if(a[i] == '\0'){
            printf("A choto");
            break;
        }
        else if(b[i] == '\0'){
            printf("B choto");
            break;
        }
        if(a[i] == b[i]){
            i++;
        }
        else if (a[i] < b[i])
        {
            printf("A choto");
            break;
        }
        else{
            printf("B boro");
            break;
        }

        
    }
    int v = strcmp(a,b);
    if (v > 0)
    {
        printf("\n b choto");
    }else if(v < 0){
        printf("\n a choto");
    }else{
        printf("\n same");
    }
    
    getchar();
}