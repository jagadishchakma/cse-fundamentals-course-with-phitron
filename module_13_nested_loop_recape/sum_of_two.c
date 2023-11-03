#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int num[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&num[i]);
    }

    int value;
    scanf("%d",&value);
    int check = 0;
    for (int i = 0; i < n-1; i++)
    {
        int prev = num[i];
        for (int x = i+1; x < n; x++)
        {
           if ((prev + num[x]) == value)
           {
            check = 1;
            break;
           }
           
        }
        
    }
    if (check)
    {
        printf("YES");
    }else{
        printf("NO");
    }
    
    
    
    getchar();
}