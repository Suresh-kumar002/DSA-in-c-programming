#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *front=NULL,*rear=NULL;

void enqueue(int val){
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=val;
    temp->next=NULL;

    if(rear==NULL){
        front=rear=temp;
    }else{
        rear->next=temp;
        rear=temp;
    }
    printf("Enqueue %d\n",val);
}

void dequeue(){
    if(front==NULL){
        printf("Queue underflow\n");
    }else{
        struct node *temp=front;
        printf("Dequeue %d\n",front->data);
        front=front->next;
        if(front==NULL)
            rear=NULL;
        free(temp);
    }
}

void display(){
    struct node *temp=front;
    if(temp==NULL){
        printf("Queue empty\n");
    }else{
        while(temp!=NULL){
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
}

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);

    display();

    dequeue();
    dequeue();

    display();

    return 0;
}
