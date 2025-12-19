#include <stdio.h>
#define size 5

int queue[size];
int front=-1,rear=-1;

void enqueue(int val){
    if(rear==size-1){
        printf("Queue overflow\n");
    }
    else{
        if(front==-1)
            front=0;
        rear++;
        queue[rear]=val;
        printf("Enqueue %d\n",val);
    }
}

void dequeue(){
    if(front==-1 || front>rear){
        printf("Queue underflow\n");
    }
    else{
        printf("Dequeue %d\n",queue[front]);
        front++;
    }
}

void display(){
    int i;
    if(front==-1 || front>rear){
        printf("Queue empty\n");
    }
    else{
        for(i=front;i<=rear;i++)
            printf("%d ",queue[i]);
        printf("\n");
    }
}

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);

    display();

    dequeue();
    dequeue();

    display();

    return 0;
}
