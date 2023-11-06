/*
Author: Jagadish Chakma
Date: 5-11-2023
language: c
*/
#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d",&n);
        char str[n];
        scanf("%s",str);
        int pathaan = 0, tiger = 0;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == 'T')
            {
                tiger++;
            }else if(str[i] == 'P'){
                pathaan++;
            }
            
        }
        if (pathaan == tiger)
        {
            printf("Draw\n");
        }else if(pathaan > tiger){
            printf("Pathaan\n");
        }else{
            printf("Tiger\n");
        }
        
        
    }
    
    return 0;
}