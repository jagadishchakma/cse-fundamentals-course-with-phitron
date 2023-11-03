#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    scanf("%s",str);
    int count[26]={0};
    for (int i = 0; i < strlen(str); i++)
    {
        int v = str[i]-97;
        count[v]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
           printf("%c - %d\n",i+97,count[i]);
        }
        
        
    }
    
    
    getchar();
}