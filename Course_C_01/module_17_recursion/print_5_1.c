#include <stdio.h>
void lasFirst(int i){
    if (i == 0) return;
    printf("%d\n",i);
    lasFirst(i-1);
}
int main(){
    lasFirst(20);
   return 0;
}