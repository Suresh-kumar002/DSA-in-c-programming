
#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};


struct node* createNode(int val) {
    struct node *newNode =
        (struct node*)malloc(sizeof(struct node));

    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        return NULL;
    }

    newNode->value = val;
    newNode->next = NULL;
    return newNode;
}


void insertAtEnd(struct node **head, int val) {
    struct node *newNode = createNode(val);

    if (*head == NULL) {
        *head = newNode;
    } else {
        struct node *temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}


void displayList(struct node *head) {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    struct node *temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->value);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct node *head = NULL;

    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);

    printf("Linked list elements are:\n");
    displayList(head);

    return 0;
}