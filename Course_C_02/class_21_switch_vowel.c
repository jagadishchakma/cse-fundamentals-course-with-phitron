/*
Author: Jagadish Chakma
Date: 8-11-2023
language: c
*/
#include <stdio.h>
int main(){
    char l;
    scanf("%c",&l);
    switch (l)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("vowel");
        break;
    
    default:
        printf("consonant");
        break;
    }
    return 0;
}