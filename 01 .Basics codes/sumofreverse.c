#include<stdio.h>
int main(){
    int n, r=0, sum;
    printf("enter the value :");
    scanf("%d",&n);
    while (n>0)
    {
        r=r*10;
        r=r+(n%10);
        n=n/10;
    
      
    
    } printf("\n%d%d",r,sum);
    


    

}