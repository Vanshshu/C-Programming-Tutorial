#include<stdio.h>
int main(){
    int row,i,j;
    printf("enter the numbefr of rows:");
    scanf("%d",&row);
    for(i=1; i<=row; i++){
for(j=i; j<row; j++){
    printf("");
}
for  (j = 1; j<=i; j++)
{
   printf("*");
}

printf("\n");
    }
return 0;

}