#include <stdio.h>
int fun(char str[],int i){
    if (str[i] == '\0') return 0;
    int length = fun(str, i+1);
    
    return length+1;
}
int main(){
    char str[] = "jagadish chakma";
    int length = fun(str,0);
    printf("%d\n",length);
    return 0;
}