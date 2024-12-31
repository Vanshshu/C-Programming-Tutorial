#include<stdio.h>
int main(){
int n;
printf("enter the number of the rows/cloumns:");
scanf("%d",&n);
printf("enter the sll the elements\n");
int arr[n][n];
for (int i = 0; i <n; i++)
{
    for (int j = 0; j<n; j++)
    {
        scanf("%d",&arr[i][j]);
    }
    
}//transpose
for (int i = 0; i <n; i++)
{
    for (int  j= 0; j <=i; j++)
    {
        int temp=arr[i][j];
        arr[i][j]=arr[j][i];
        arr[j][i]=temp;
    }
    
}
//rotate
for (int i = 0; i < n; i++)
{
   int j=0;
   int k=n-1;
   while (j<k)
   {
    int temp=arr[i][j];
    arr[i][j]=arr[j][k];
    arr[i][k]=temp;
   }
   
    
}


//output
 for (int i = 0; i < n; i++)
 {
    for (int j = 0; j< n; j++)
    {
        printf("%d",arr[i][j]);
    }
    printf("\n");
 }
 return 0;



}