#include<stdio.h>
int main(){
    int arr[10];
    int size=0;
    int i;
    printf("Enter the size of array between 1 to 10: ");
    scanf("%d",&size);
    if(size < 1 || size > 10)
    {
        printf("Inavaild size");
        return 0;
    }
    printf("Enter the element in the array: ");
    for(i =0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int choice,data;
    printf("Enter the choice 1 for insert at the begining and 2 for the insert at the end and 3 for specific position: ");
    scanf("%d",&choice);
    printf("Enter the data: ");
    scanf("%d",&data);
    if(choice == 1)
    {
        if(size==10)
        {
            printf("array is full, You can't insert any data ");
            return 0;
        }
        for(int i= size;i>0;i--)
        {
            arr[i]=arr[i-1];
        }
        arr[0] = data;
        size++;
    }
    else if(choice == 2)
    {
        if(size==10)
        {
            printf("array is full, You can't insert any data ");
            return 0;
        }
        arr[size]=data;
        size++;

    }
    else if(choice == 3)
    {
        if(size==10)
        {
            printf("array is full, You can't insert any data ");
            return 0;
        }
        int location;
        printf("Enter the location where you want to insert: ");
        scanf("%d",&location);
        for(int i=size; i>location;i--){
            arr[i]=arr[i-1];
        }
        arr[location]=data;
        size++;
    }
    else{
        printf("Enter the valid choice 1,2,3....");
    }
    // updated array
    printf("Updated array: ");
    for(int i= 0; i<size; i++)
    {   
        printf("\t %d",arr[i]);
    }
    return 0;
}