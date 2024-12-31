#include<stdio.h>
int main(){
    int arr[7]={55,55,5,3,14,1,5};
    int max=arr[0];
    int secondmax=-1;
    for (int  i = 0; i<7; i++)
    {
        if (max<arr[i])
        {
            max=arr[i];
        }
        
    }for (int  i = 0; i<7; i++)
    {
        if (arr[i]!=max && secondmax<arr[i])
        {
            secondmax=arr[i];
        }
        
    }
    
    printf("%d",secondmax);
    return 0;
    
}