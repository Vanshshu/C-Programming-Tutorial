#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};
void insertAtEnd(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}
void displayList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
void reverseList(struct Node** head) {
    struct Node* prev = NULL;
    struct Node* current = *head;
    struct Node* next = NULL;

    while (current != NULL) {
        next = current->next; 
        current->next = prev; 
        prev = current;      
        current = next;
    }
    *head = prev; 
}


int main() {
    struct Node* head = NULL;
    int choice, data;

    while (1) {
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                scanf("%d", &data);
                insertAtEnd(&head, data);
                break;

            case 2:
                displayList(head);
                break;

            case 3:
                reverseList(&head);
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

     return 0;
}
