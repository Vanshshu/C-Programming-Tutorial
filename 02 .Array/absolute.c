#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a ,  b;
printf("enter the cost price");
scanf("%d",&a);
printf("enter the selling price");
scanf("%d",&b);
if(a<b){
    a=b-a;
    printf("%d profit",a);
}else(a>b);
{
    b=a-b;
printf("\n%d loss",b);}

    
    return 0;
}
