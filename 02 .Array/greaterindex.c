#include<stdio.h>
int main(){
    int n;
    printf("enter the number of the element: ");
    scanf("%d",&n);
    int arr[n];
    int k;
    printf("Enter the element in the array: ");
    for (int  i = 1; i <= n; i++)
    {
        scanf("%d",&arr[i]);  
       
    } 
    printf("ek number enter karo jiske aage ka number print ho: ");
    scanf("%d",&k);
    k=arr[k];
    for (int i = k; i <=n; i++)
    {
         printf("%d",arr[i]);
    }
    
    
     


    
    return 0;
    
}