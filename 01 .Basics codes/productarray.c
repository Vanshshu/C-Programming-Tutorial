#include<stdio.h>
int main(){
    int n;
    printf("enter the size of array:");
    scanf("%d",&n);
    int arr[n];
   int product;
    for (int  i = 0; i <=n-1; i++)
    {
       scanf("%d",arr[i]);
    
    
    
        product=product*arr[i];
       
    

    }
    
printf("%D",product);
}