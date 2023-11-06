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

        long long int m;
        scanf("%lld",&m);
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        int multi = a*b*c;
        if ((m % multi) == 0)
        {
            printf("%lld\n",m/multi);
        }else if(multi*0 == m)
        {
            printf("%d\n",0);
        }else
        {
            printf("%d\n",-1);
        }
    }
    
    return 0;
}