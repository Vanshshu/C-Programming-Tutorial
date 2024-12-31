#include<stdio.h>
int main(){
int num;


printf("Enter the number : ");
scanf("%d",&num);
int temp=num;
if(num<0){
    return 0;
}
int res=0;

for(int i=1; num>0; i++){
    res=res*10;
    res=res+(num%10);
    
    num=num/10;
}
printf("%d\n",res);
if(temp==res){
    printf("The number is palindrome");
}
else{
    printf("The number is not palindrome");
}
    return 0;
}