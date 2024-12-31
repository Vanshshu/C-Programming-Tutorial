#include<stdio.h>
int main(int argc, char const *argv[])
{int num1 , num2;
    printf("enter num1: ");
    scanf("%d",&num1);
printf("enter num2: ");
    scanf("%d",&num2);
    int choice;
    printf("choose the num for  addtion=1 for multiply =2 for dividion=3 for subtration=4");
    scanf("%d",&choice);
    if (choice==1){
        int c=num1+num2;
        printf("%d",c);

    }
    else if (choice==2)
    {
        int c=num1*num2;
        printf("%d",c);

    }
    else if (choice==3){
        int c=num1/num2;
        printf("%d",c);

    }
    else if (choice==4){
        int c=num1-num2;
        printf("%d",c);

    }if(choice==0){
        printf("invalid choice");
    }
    return 0;
}
