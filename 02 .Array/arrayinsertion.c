#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int arr[7];
printf("enter the elemrnts ");
for (int i= 0; i<=7; i++)
{
    scanf("%d",&arr[i]);
}

    int size=7;
    int newPosition=0;
    int newElement=34;
 for(int i=size-1; i>=newPosition;i--){
     arr[i+1]=arr[i];
     }
    arr[newPosition]=newElement;
    size++;
    
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
