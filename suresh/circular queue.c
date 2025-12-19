#include <stdio.h>
#define size 5

int cq[size];
int front = -1, rear = -1;

void enqueue(int val){
    if((rear + 1) % size == front){
        printf("Queue overflow\n");
    }
    else{
        if(front == -1)
            front = 0;
        rear = (rear + 1) % size;
        cq[rear] = val;
        printf("Enqueue %d\n", val);
    }
}

void dequeue(){
    if(front == -1){
        printf("Queue underflow\n");
    }
    else{
        printf("Dequeue %d\n", cq[front]);
        if(front == rear){
            front = rear = -1;
        }
        else{
            front = (front + 1) % size;
        }
    }
}

void display(){
    int i;
    if(front == -1){
        printf("Queue empty\n");
    }
    else{
        i = front;
        while(1){
            printf("%d ", cq[i]);
            if(i == rear)
                break;
            i = (i + 1) % size;
        }
        printf("\n");
    }
}

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);

    display();

    dequeue();
    dequeue();

    enqueue(60);
    enqueue(70);

    display();

    return 0;
}
