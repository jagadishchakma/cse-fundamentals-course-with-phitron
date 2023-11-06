/*
Author: Jagadish Chakma
Date: 5-11-2023
language: c
*/
#include <stdio.h>
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int mat[n][m];
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < m; j++)
       {
            scanf("%d",&mat[i][j]);
       }
       
    }
    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == j)
            {
                if (mat[i][j] != 1)
                {
                    flag = 0;
                    break;
                }
            }else if(i+j == m-1)
            {
                if (mat[i][j] != 1)
                {
                    flag = 0;
                    break;
                }
            }
            else if(mat[i][j] != 0){
                flag = 0;
                break;
            }
            
        }
        
    }
    if (flag)
    {
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    
    
    
    return 0;
}