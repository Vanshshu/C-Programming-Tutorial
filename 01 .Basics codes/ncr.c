#include <stdio.h>
int main()
{
    int num, r;
    printf("Enter n number :");
    scanf("%d", &num);
    printf("Enter r number :");
    scanf("%d", &r);
    int nfact = 1;  // n!
    int rfact = 1;  // r!
    int nrfact = 1; // n-r!
    for (int i = 1; i <= num; i++)
    {
        nfact = nfact * i;
    }
    for (int i = 1; i <= r; i++)
    {
        rfact = rfact * i;
    }
    for (int i = 1; i <= (num - r); i++)
    {
        nrfact = nrfact * i;
    }
    int ncr = nfact / (rfact * nrfact);
    printf("%d", ncr);
    return 0;
}