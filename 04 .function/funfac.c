#include<stdio.h>
int factorial(n){
    int product =1;
    for (int  i = 1; i <=n; i++)
    {
        product=product*i;
    } return product;
    
}

int main(){
    int n;
    printf("enter the number :");
    scanf("%d",&n);
  int fact= factorial(n);
 printf("%d", fact);
     return 0;
} 