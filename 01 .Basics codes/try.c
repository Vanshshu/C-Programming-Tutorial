#include<stdio.h>
int main()
{
    int n,i,count=0;
    printf("Enter the number to check number is prime or not");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%1==0){
            count++;
        }
    }
    if(count==i){
        printf("Given number is prime");
    }
    else{
        printf("Number is not prime");
    }
    return 0;   wrong  c ode
}