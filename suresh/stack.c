#include <stdio.h>
#define size 5
int stack[size];
int top=-1;

void push(int val){
    if(top==size-1){
        printf("stack is overflow\n");
    }else{
        top=top+1;
        stack[top]=val;
        printf("push %d \n ",val);
    }
}
void pop(){
    if(top==-1){
        printf("stack is underflow\n");
    }else{
        int poped=stack[top];
        top=top-1;
        printf("pop %d \n",poped);
    }
}
int main() {
    int arr[]={2,3,4,5,6};
    
    push(arr[0]);
    push(arr[1]);
    push(arr[2]);
    push(arr[3]);
    push(arr[4]);
    
    push(99);
    
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    
}
