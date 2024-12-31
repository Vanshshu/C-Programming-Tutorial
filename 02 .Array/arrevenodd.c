#include<stdio.h>
int  main(){
int arr[5]={1,2,5,6,5};
for (int i = 0; i < 5; i++)
{
    if (i%2!=0)
    {
        arr[i]*=2;
    }else
    {
        arr[i]+=10;
    }
    
}for (int  i = 0; i <5; i++)
{
    printf("%d ",arr[i]);
}



}