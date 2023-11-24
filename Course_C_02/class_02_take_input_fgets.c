#include <stdio.h>
int main(){
    char your_name[100];
    fgets(your_name,sizeof(your_name),stdin);
    printf("%s",your_name);
    return 0;
}