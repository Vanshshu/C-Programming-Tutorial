#include<stdio.h>
int main(){
    int arr[6]={10,55,20,40,70,90};
  int max= arr[0];
  for (int i = 0; i < 6; i++)
  {
    if (max<arr[i])
    {
        max=arr[i];
    }
  
  }
    printf("%d",max);
    return 0;

}