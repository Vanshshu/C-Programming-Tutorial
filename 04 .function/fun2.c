#include<stdio.h>
int main()
{int n;
printf("enter the num :");
scanf("%D",&n);
int fact=1;
for (int i = 1; i <=n; i++)
{
    fact=fact*i;
}
printf("%d", fact);


}
