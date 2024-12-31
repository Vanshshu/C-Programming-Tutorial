#include<stdio.h>
int main(){
    int r;
    printf("enter the number of row:");
    scanf("%d",&r);
    int c; 
    printf("enter the of number of cloumnss:");
    scanf("%d",&c);
    int arr[r][c];
    for (int i = 0; i <r; i++)
    {
        for (int j = 0; j <c; j++)
        {
            scanf("%d ",&arr[i][j]);
        
        }
        
    }printf("\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j <c; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }int sum=0;
    for (int  i = 0; i < r; i++)
    {
        for (int j = 0; j< c; j++)
        {
            sum +=arr[i][j];
}
        
    }printf("tne sum of matrix is %d",sum);
    
    
    
}
