#include <stdio.h>
void pass_by_reference(int* a){
    printf("%d\n",*a);
    *a = 900;
}
int main(){
    int a = 500;
    pass_by_reference(&a);
    printf("%d",a);
    getchar();
}