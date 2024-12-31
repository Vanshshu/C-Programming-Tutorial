#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    // Read the size of the array
    scanf("%d", &n);
    int arr[n];

    // Input the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Selection sort algorithm
    for (int i = 0; i < n - 1; i++) {
        int min = INT_MAX;
        int minidx = -1;

        // Find the minimum element in the unsorted part
        for (int j = i; j < n; j++) {
            if (arr[j] < min) {
                min = arr[j];
                minidx = j;
            }
        }

        // Swap the found minimum with the first element
        int temp = arr[minidx];
        arr[minidx] = arr[i];
        arr[i] = temp;
    }

    // Print the sorted array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
