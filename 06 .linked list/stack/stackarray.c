#include <stdio.h>
#include<conio.h>
#define maxsize 4

int stack[maxsize], top = -1;

void push()
{
  int n;
  if (top == maxsize - 1)
  {
    printf("Stack overflow\n");
  }
  else
  {
    printf("Enter the element: ");
    scanf("%d", &n);
    top++;
    stack[top] = n;
  }
}

void display()
{
  if (top == -1)
  {
    printf("Stack is empty\n");
  }
  else
  {
    printf("Elements of the stack: ");
    for (int i = top; i >= 0; i--)
    { 
      printf("%d ", stack[i]);
    }
    printf("\n");
  }
}

void pop()
{
  if (top == -1)
  {
    printf("Stack is empty\n");
  }
  else
  {
    printf("Popped element: %d\n", stack[top]);
    top--;
  }
}

int main()
{
  int choice;
  do
  {
    printf("\n1. Push\n2. Pop\n3. Display\n4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      push();
      break;
    case 2:
      pop();
      break;
    case 3:
      display();
      break;
    case 4:
      printf("Exiting...\n");
      break;
    default:
      printf("Invalid choice, please try again.\n");
    }
  } while (choice != 4);

  return 0;
}