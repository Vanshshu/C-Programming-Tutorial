#include<stdio.h>
struct node
{
    int data;
    struct node*prev;
    struct node*next;
};
 struct node*head,*tail;
 void createdoublylinkedlist(){
    struct node*newnode; head=0;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data\n");
    scanf("%d",&newnode->data);
    newnode->prev=0; 
    newnode->next=0;
    if (head==0)
    {
        head=tail=new node;
    }
    else{
        tail->next=new node;
        newnode->prev=tail;
        tail=new node;
    }
    
 }
int main(){
    int n; 
    scanf("%d",&n);

                                                         
}