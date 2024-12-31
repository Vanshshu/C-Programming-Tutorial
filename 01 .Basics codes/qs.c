#include<stdio.h>
int main()
{int a, b, c;
printf("enter the age of ram: ");
scanf("%d",&a);
printf("enter the age of shyam: ");
scanf("%d",&b);
printf("enter the age of chaman: ");
scanf("%d",&c);
if (a<b)
{if (a<c){
    printf("%d youngest age",a);
}else{
    printf("%d young age"  , c);
}
    
}else if (b<c)
{
    printf("%d youngest age",b);
}



    
    return 0;
}
