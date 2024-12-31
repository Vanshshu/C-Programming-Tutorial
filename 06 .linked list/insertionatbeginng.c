#include <stdio.h>
#include <stdlib.h>

// Define the structure for the Node
struct Node
{
    int data;
    struct Node *next;
};

// Function to create a new node
struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node)); // Correct malloc usage
    if (newNode == NULL)
    {
        printf("Memory allocation failed\n");
        exit(1); 
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the beginning of the linked list
struct Node *insertAtBeginning(struct Node *head, int data)
{
    struct Node *new1 = createNode(data); // Use the createNode function
    new1->next = head;                    // The new node's next points to the current head
    head = new1;                          // The new node becomes the new head
    return head;
}

// Function to display the linked list
void display(struct Node *head)
{
    if (head == NULL)
    {
        printf("Linked list is empty\n");
        return;
    }
    else
    {
        struct Node *temp = head; // Use temp to traverse the list
        while (temp != NULL)
        {                              // Correct condition, != instead of !==
            printf("%d ", temp->data); // Print the data
            temp = temp->next;         // Move to the next node
        }
        printf("\n");
    }
}

int main()
{
    struct Node *head = NULL; // Initialize head to NULL
    int n, data;

    printf("Enter the number of nodes you want: ");
    scanf("%d", &n);

    // Insert nodes at the beginning
    for (int i = 0; i < n; i++)
    {

        printf("Enter the data for node %d: ", i + 1);
        scanf("%d", &data);
        head = insertAtBeginning(head, data); // Insert the node at the beginning
    }

    printf("Updated list: ");
    display(head); // Display the linked list

    return 0;
}
