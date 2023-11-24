#include <stdio.h>
#include <ctype.h>
int main(){
    char lower,upper;
    scanf("%c",&lower);
    upper = toupper(lower);
    printf("%c",upper);
    return 0;
}