#include<stdio.h>
int main(){

    int a=5;
    int *b;
    // int c=5;
    // int *d;
    b=&a;
    // d=&c;
    // printf("%d\n",d);
    printf("%d\n",&b);
    // printf("%d",d);
    return 0;
}