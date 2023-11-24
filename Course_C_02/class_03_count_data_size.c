#include <stdio.h>
int main(){
    int a; 
    long long int b; 
    float c; 
    double d; 
    char e;
    int size1 = sizeof(a);
    long long int size2 = sizeof(b);
    float  size3 = sizeof(c);
    double size4 = sizeof(d);
    char size5 = sizeof(e);
    printf("Integer data size: %d bytes \n",size1);
    printf("long long Integer data size: %lld bytes \n",size2);
    printf("floting data size: %f bytes \n",size3);
    printf("double data size: %lf bytes \n",size4);
    printf("character data size: %d byte \n",size5);
    return 0;
}