/*
Author: Jagadish Chakma
Date: 4-11-2023
language: c
*/

#include <stdio.h>
#include <string.h>
int main(){
    char str[1001];
    scanf("%s",str);
    char str2[1001];
    int length = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    
    int j = 0;
    for (int i = length-1; 0 <= i; i--)
    {
        str2[j] = str[i];
        j++;
    }
    if (strcmp(str,str2) == 0)
    {
       printf("YES\n");
    }else{
        printf("NO\n");
    }
    
    
    
    return 0;
}