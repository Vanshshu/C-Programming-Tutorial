#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, c;
    printf("enter the age rupesh");
    scanf("%d",&a);
     printf("enter the age uski maal");
    scanf("%d",&b);
     printf("enter the age aur mai");
    scanf("%d",&c);
    if(a<b && a<c)
    {
    printf("%d young age",a);
    }
    if(b<a && b<c)
    {
    printf("%d young age",b);
    } 
    if(c<a && c<b)
    {
    printf("%d young age",c);
    }
    


    return 0;
}
