#include <stdio.h>
int main(){
    char a[21],b[21];
    scanf("%s %s", a,b);

    for (int i = 0; ; i++)
    {
        if (a[i] == '\0' && b[i] == '\0')
        {
            printf("%s",a);
            break;
        }else if(a[i] == '\0'){
            printf("%s",a);
            break;
        }else if(b[i] == '\0'){
            printf("%s",b);
            break;
        }

        if (a[i] == b[i])
        {
            continue;
        } else if(a[i] < b[i]){
            printf("%s",a);
            break;
        }else{
            printf("%s", b);
            break;
        }
        
        
    }
    
    getchar();
}