#include<stdio.h>

int main(){
    // 1st matrix
    int r, c;
    printf("Enter the number of rows for the first matrix: ");
    scanf("%d", &r);
    printf("Enter the number of columns for the first matrix: ");
    scanf("%d", &c);
    
    int arr[r][c];
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    //wave print 
    for (int i = 0; i < r; i++) {
        if(i%2==0){
        for (int j = 0; j < c; j++) {
            printf("%d", arr[i][j]);
        }
    }
    else{
        for (int  j = c-1; j>=0; j--)
        {
            printf("%d",arr[i][j]);
        }
        
    }
    printf("\n");
    }

    return 0;
}