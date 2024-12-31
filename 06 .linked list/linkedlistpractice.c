#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *insertFirst(struct node *head, int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    if (head == NULL)
    {
        newnode->data = data;
        head=newnode;
    }
    else
    {
        newnode->data = data;
        newnode->next = head;
        head = newnode;
    }
    return (head);
}
void display(struct node *head)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
}
int main()
{
    int n, i, data;
    printf("enter the number of node:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {

        printf("enter the data: ");
        scanf("%d", &data);
        head = insertFirst(head, data);
    }
    printf("uptade list ");
    display(head);
    return 0;
}
