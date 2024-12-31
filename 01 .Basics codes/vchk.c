#include<stdio.h>
main(){
    int a, b, c,d;
    printf("enter the num  ");
    scanf("%d",&a);
     printf("enter the num  ");
    scanf("%d",&b);
 printf("enter the num  ");
    scanf("%d",&c);
    printf("enter the num  ");
    scanf("%d",&d);
    if(a>b && a>c && a>d){
        printf("%d",a);
    }
    else if(b>a && b>c && b>d)
    {
        printf("%d",b);
    }
    else if(c>a && c>b && c>d)
    {
        printf("%d",c);
    }
    else if (d>a && d>b && d>c)
    {
        printf("%d",d);
    }
    else{
        printf("Nikal ja tuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu");
    }
    return 0;
}