#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insertLast(struct Node** head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    struct Node* current = *head;
    while (current->next != NULL) {
        current = current->next;
    }

    current->next = newNode;
}

void deleteFront(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty. Cannot delete.\n");
        return;
    }

    struct Node* toDelete = *head;
    *head = (*head)->next;

    free(toDelete);
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
    insertLast(&head, 1);
    insertLast(&head, 2);
    insertLast(&head, 3);

    displayList(head);

    deleteFront(&head);

    displayList(head);

    return 0;
}

