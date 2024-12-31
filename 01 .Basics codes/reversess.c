#include<stdio.h>
int main(){
int n, r=0, last;
printf("enter the number: ");
scanf("%d",&n);
while (n>0)
{ 
    r=r*10;
r=r+(n%10);

n=n/10;
    
}printf("%d  reverse ",r);


    return 0;
}