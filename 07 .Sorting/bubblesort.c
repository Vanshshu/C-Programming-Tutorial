#include <stdio.h>

void printarray(int *Arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", Arr[i]); // Added space for better readability
    }
    printf("\n");
}

void bubblesort(int *Arr, int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) { // Corrected condition
            if (Arr[j] > Arr[j + 1]) {
                temp = Arr[j];
                Arr[j] = Arr[j + 1];
                Arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int Arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) { // Corrected input loop
        scanf("%d", &Arr[i]);
    }

    printf("Array before sorting: ");
    printarray(Arr, n);

    bubblesort(Arr, n);

    printf("Array after sorting: ");
    printarray(Arr, n);

    return 0;
}
