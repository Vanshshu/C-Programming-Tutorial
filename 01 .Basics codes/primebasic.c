#include <stdio.h>
int main() {
    int i, j, isPrime;
    printf("Prime numbers between 1 and 100 are:\n");
    for (i = 2; i <= 100; i++) {
        isPrime = 1; // Assume i is prime

        for (j = 2; j * j <= i; j++) { // Check divisibility up to the square root of i
            if (i % j == 0) {
                isPrime = 0; // Not prime
                break;
            }
        }

        if (isPrime) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
