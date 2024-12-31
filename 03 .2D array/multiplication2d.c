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
    
    // 2nd matrix
    int p, q;
    printf("Enter the number of rows for the second matrix: ");
    scanf("%d", &p);
    printf("Enter the number of columns for the second matrix: ");
    scanf("%d", &q);
    
    // Check if matrices can be multiplied
    if (c != p) {
        printf("Matrix multiplication not possible: columns of the first matrix must equal rows of the second matrix.\n");
        return 1;
    }
    
    int brr[p][q];
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            scanf("%d", &brr[i][j]);
        }
    }

    // Resultant matrix
    int res[r][q];
    
    // Multiplying matrices
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < q; j++) {
            res[i][j] = 0;
            for (int k = 0; k < c; k++) { // 'k' should iterate over columns of first matrix and rows of second matrix
                res[i][j] += arr[i][k] * brr[k][j];
            }
        }
    }

    // Printing the resultant matrix
    printf("Resultant matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}
