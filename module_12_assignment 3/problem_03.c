#include <stdio.h>
int main(){
    int t,m1,m2,d;
    scanf("%d",&t);
    int count[t];
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d", &m1, &m2, &d);
        int m12 = m1+m2;
        int td = m1*d/m12;
        int result = d-td;
        count[i]=result;
        

    }
    for (int i = 0; i < t; i++)
    {
        printf("%d\n",count[i]);
    }
 
   

    getchar();
}