#include <stdio.h>
#include <ctype.h>
int main(){
    char upper;
    scanf("%c",&upper);
    char lower = tolower(upper);
    printf("%c",lower);
    return 0;
}