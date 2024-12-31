#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node* next;

};
struct  node *head=NULL,*ptr;
void create();
void display();
void main()
{
    create();//calling
    display();//calling
}void create (){
    struct node* temp;
    int n,i; 
    printf("enter the number of nodes required");

    scanf("%d",&n);
    for(i=0; i<n; i++){
        ptr=(struct node*)malloc(sizeof(struct node));
        printf("enter the node data");
        scanf("%d", &ptr->data);
        ptr->next=NULL;
        if (head==NULL)
        {
            head=ptr;
        }else{
            temp=head;
            while (temp-> next!=NULL);
            {
                temp=temp->next;
                temp->next=ptr;
            }
            
        }
        

    }void display();
    {
        struct node*temp;
        temp=head;
        
        while (temp!=NULL)
        {
           printf("%d->",temp->data);
        }
        
        
    }
}