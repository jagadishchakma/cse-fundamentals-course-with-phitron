
#include <stdio.h>
#include <string.h>
int main(){
    int t;
    scanf("%d",&t);
    char str[10001];
    for (int i = 0; i < t; i++)
    {
        scanf("%s",str);
        int c=0,s=0,d=0;
        int length = strlen(str);
        for (int i = 0; i < length; i++)
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                s++;
            }else if(str[i] >= 'A' && str[i] <= 'Z'){
                c++;
            }else{
                d++;
            }
        }
        printf("%d %d %d\n",c,s,d);
    }
    return 0;
}