#include<stdio.h>
int main(){
    int arr[5]={2,4,3,5,6};
    int product=1;
    for (int i = 0; i <5; i++)
    {
    product=product*arr[i];

    }printf("%d",product);
    return 0;
    
}