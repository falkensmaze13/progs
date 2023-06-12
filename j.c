#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insertFront(struct Node** head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = *head;

    *head = newNode;
}

void deleteLast(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty. Cannot delete.\n");
        return;
    }

    if ((*head)->next == NULL) {
        free(*head);
        *head = NULL;
        return;
    }

    struct Node* secondLast = *head;
    while (secondLast->next->next != NULL) {
        secondLast = secondLast->next;
    }

    free(secondLast->next);
    secondLast->next = NULL;
}

void displayList(struct Node* head) {
    struct Node* current = head;

    if (current == NULL) {
        printf("List is empty.\n");
        return;
    }

    printf("Linked List: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL; 
    insertFront(&head, 3);
    insertFront(&head, 2);
    insertFront(&head, 1);

    displayList(head);

    deleteLast(&head);

    displayList(head);

    return 0;
}

