#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    int priority;
    struct node *next;
};

struct node *front = NULL;

void enqueue(int data, int priority)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->priority = priority;
    temp->next = NULL;

    // empty ya highest priority
    if (front == NULL || priority < front->priority) {
        temp->next = front;
        front = temp;
    } else {
        struct node *p = front;
        while (p->next != NULL && p->next->priority <= priority)
            p = p->next;

        temp->next = p->next;
        p->next = temp;
    }
}

void dequeue()
{
    if (front == NULL) {
        printf("Queue empty\n");
    } else {
        struct node *temp = front;
        printf("Deleted %d\n", temp->data);
        front = front->next;
        free(temp);
    }
}

void display()
{
    struct node *temp = front;
    while (temp != NULL) {
        printf("%d(%d) -> ", temp->data, temp->priority);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    enqueue(10, 2);
    enqueue(20, 1);
    enqueue(30, 3);

    display();

    dequeue();
    display();

    return 0;
}
