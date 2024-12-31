#include <stdio.h>
int main()
{
    int n, i;
    printf("enter the value of n ");
    scanf("%d", &n);
    int product = 1;
    for (i = 1; i <= n; i++)
        
    {
        product = product * i;
        printf("\nfactorial %d ", product);
    }
   

    return 0;
}