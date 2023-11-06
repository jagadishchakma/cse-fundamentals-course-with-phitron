#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long long int total_tk;
    int p_conditon = 1000;
    int s_condition = 500;
    scanf("%lld", &total_tk);
    if(p_conditon <= total_tk && s_condition <= (total_tk-p_conditon)){
        printf("I will buy Punjabi \n");
        printf("I will buy new shoes \n");
        printf("Alisa will buy new shoes \n");

    }else if(p_conditon < total_tk){
        printf("I will buy Punjabi \n");
    }
    else{
        printf("Bad luck! \n");
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
