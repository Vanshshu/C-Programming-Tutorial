#include<stdio.h>
int power(int a,int b ){
    if(b==0) return 1;
     int recur = a*power(a,b-1);
     return recur;

}
int main(){
    int a, b;                                          
    printf("enter the  value od a:");
    scanf("%d",&a);
     printf("enter the  value od b:");
    scanf("%d",&b);
    int p=power(a,b);
    printf("%d raised power %d  is %d",a,b,p);
    return 0;
}