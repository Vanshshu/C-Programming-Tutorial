#include<stdio.h>
int main(){
    int arr[19]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,188,19};
    int x=8;
    for (int  i = 0; i <19; i++)
    {
        if (arr[i]==x)
        {
        printf("%d is present in the array and its index is %d",x,i);
        }
        
    }
    
}