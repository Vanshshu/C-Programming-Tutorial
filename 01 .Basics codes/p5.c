#include<stdio.h>
int main(){
    int row,i,j;
    printf("enter the  number of rows :");
    scanf("%d",&row);
    for (i = 1; i <=row; i++)
    {
        for ( j = 1; j<=row+1-i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}