#include <stdio.h>

void printArray(int* A, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void insertionsort(int* A, int n) {
    int key, j;
    for (int i = 1; i < n; i++) {
        key = A[i];
        j = i - 1;

        // Shift elements of A[0..i-1], that are greater than key, to one position ahead
        while (j >= 0 && A[j] > key) {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = key;
    }
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int A[n];

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    printf("Array before sorting:\n");
    printArray(A, n);
    
    insertionsort(A, n);

    printf("Array after sorting:\n");
    printArray(A, n);

    return 0;
}
