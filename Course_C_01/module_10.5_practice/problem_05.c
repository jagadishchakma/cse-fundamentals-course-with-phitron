#include <stdio.h>
#include <string.h>
int main(){
    char str1[11],str2[11];
    scanf("%s %s",str1,str2);
    int size1 = strlen(str1);
    int size2 = strlen(str2);
    printf("%d %d\n",size1,size2);
    printf("%s%s\n",str1,str2);

    char tmp = str1[0];
    str1[0] = str2[0];
    str2[0] = tmp;
    printf("%s %s\n", str1, str2);
    
    getchar();
}