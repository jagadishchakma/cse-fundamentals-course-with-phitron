#include <stdio.h>
int main(){
    char fname[1000];
    char lname[1000];
    scanf("%s",fname);
    scanf("%s",lname);
    long long int fcount = 0;
    for (int i = 0; fname[i] != '\0'; i++)
    {
        fcount++;
    }
    long long int lcount = 0;
    for (int i = 0; lname[i] != '\0'; i++)
    {
        lcount++;
    }
    printf("%lld %lld\n", fcount, lcount);
    printf("%s %s\n", fname, lname);
    
    getchar();
}