#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node*next ;

};
void Traversal(struct Node *ptr){
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr=ptr->next;
    }
    

}
int main(){
    struct Node * head;
     struct Node * second;
      struct Node * third;

      //Allocate memory for nodes int the linkedlist in heap
      head=(struct Node*)malloc(sizeof(struct Node));
      second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));

    //link first and second node
    head->data=7;
    head->next=second;
    //link  second nodeand third
    second->data=73;
    second->next=third;
    //link  third 
    third->data=79;
    third->next=NULL;

    Traversal(head);
    
    
}
