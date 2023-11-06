/*
Author: Jagadish Chakma
Date: 9-10-2023
language: c
*/
#include <stdio.h>
int main(){
    int line;
    while(scanf("%d", &line) != EOF)
    {
        
        if(line == 1999){
            printf("Correct\n");
            break;
        }else{
            printf("Wrong\n");
        }
    }
    
    return 0;
}