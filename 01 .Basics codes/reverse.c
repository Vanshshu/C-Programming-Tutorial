#include<stdio.h>
int main(){

    int num,rev;
    printf("Enter the number: ");
    scanf("%d",&num);
    int temp = num;
    rev=0;
    while(num>0){
        rev = rev + (num%10);
        rev= rev*10;
        num = num/10;
    }
    rev=rev/10;
    printf("%d",rev);
    return 0;
}