#include<stdio.h>
int decreasing(n){
    if (n==0) return;
    
    
printf("%d\n",n);
decreasing(n-1);
}
int main(){
    int n;
    printf("enter the value of n :");
    scanf("%d",&n);
    decreasing(n);
    return 0;
}