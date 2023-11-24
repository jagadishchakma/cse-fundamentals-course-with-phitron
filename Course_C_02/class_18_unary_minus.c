#include <stdio.h>
int main(){
    int a = 4;
    int unary_minus;
    if (a < 0)
    {
        unary_minus = -a;
    }else{
        unary_minus = a;
    }
    
    printf("%d",unary_minus);
    return 0;
}