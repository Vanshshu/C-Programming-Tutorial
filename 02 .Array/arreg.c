#include <stdio.h>

int main() {
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int totalpairs = 0;
    int x = 12;

    // Outer loop goes through each element
    for (int i = 0; i < 7; i++) {
        // Inner loop goes through elements after i
        for (int j = i + 1; j < 8; j++) {
            if (arr[i] + arr[j] == x) {
                totalpairs++;
            }
        }
    }
    
    printf("%d\n", totalpairs);
    return 0;
}
