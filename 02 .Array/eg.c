#include<stdio.h>
int decreasing(n){
    if (n==0) return ;
    printf("%d\n", n);
    decreasing(n-1);
  printf("%d\n", n);
   
  
    
}

int main(){
int n; 
printf("enter the num:");
scanf("%d",&n);
 decreasing(n);

return 0 ;

}