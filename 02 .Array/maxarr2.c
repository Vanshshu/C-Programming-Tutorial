#include<stdio.h>
int main(){
    int n;
    printf("enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    for (int  i = 0; i <n; i++)
    {
        scanf("%d",&arr[i]);
    }
   int max=arr[0];
    for (int i = 0; i < n; i++)
    {
          if (max<arr[i])
          {
            max=arr[i];
          }
          
          
          
    }
          printf("Max element is : %d",max);
    int max2=arr[1];
    for (int i= 0; i<n; i++)
    {
          if (max!=max2)
          {
            max2<arr[i];
           max2=arr[i];
           }
          }
          
    
    printf(" Second max element is : %d",max2);
    
    
return 0;
}