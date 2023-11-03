/*
Author: Jagadish Chakma
Date: 2-11-2023
language: c
*/
#include <stdio.h>
void main(){
    int rows,cols;
    scanf("%d%d",&rows,&cols);
    int arr[rows][cols];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
        
    }
    
    
}