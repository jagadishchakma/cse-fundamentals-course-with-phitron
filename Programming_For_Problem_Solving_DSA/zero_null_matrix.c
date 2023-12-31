#include<stdio.h>
int main(){
    int rows,cols;
    scanf("%d %d",&rows,&cols);
    int arr[rows][cols];
    for (int i = 0; i < rows; i++)
    {
       for (int j = 0; j < cols; j++)
       {
        scanf("%d",&arr[i][j]);
       }
    }
    // ouput array
    for (int i = 0; i < rows; i++)
    {
       for (int j = 0; j < cols; j++)
       {
        printf("%d ", arr[i][j]);
       }
       printf("\n");
    }

    // check zero or null matrix or not
    int cnt = 0;
    for (int i = 0; i < rows; i++)
    {
       for (int j = 0; j < cols; j++)
       {
        if(arr[i][j] == 0){
            cnt++;
        }
       }
       printf("\n");
    }
    if(cnt == (rows*cols)){
        printf("zero or null matrix");
    }else{
        printf("Not zero or null matrix");
    }
    return 0;
}