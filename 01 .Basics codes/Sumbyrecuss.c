#include<stdio.h>
int sum(int  n){
    if (n==0 || n==1) return 1;
        int reans=n+sum(n-1);
    return reans;

}
int main(){
    int n;
    printf("entter the value of n:");
    scanf("%d",&n);
    int s= sum(n);
    printf("%d",s);

}