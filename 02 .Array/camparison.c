#include <stdio.h>
int main()
{
    char ch;
printf("enter the month : ");
scanf("%c",&ch);
switch(ch){
    case '1':
    
    printf("jaanuary");
    break;
    case '2':
    
    printf("feb");
    break;
    case '3':
   
    printf("mar");
    break;
    case '4':
    
    printf("april");
    break;
    case '5':
   
    printf("may");
    break;
    default:
    printf("not valid month");
    break;
    
}
    return 0;

}
