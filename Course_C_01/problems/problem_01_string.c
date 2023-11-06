#include <stdio.h>
#include <string.h>

int main(){
    char str1[1001],str2[1001];
    scanf("%s %s", str1, str2);
    int length1 = strlen(str1);
    int length2 = strlen(str2);
    printf("%d %d\n", length1,length2);
    printf("%s %s\n", str1,str2);
    getchar();
}