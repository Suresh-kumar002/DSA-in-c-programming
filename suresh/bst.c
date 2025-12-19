#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *left, *right;
};

struct node* newNode(int val){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = val;
    temp->left = temp->right = NULL;
    return temp;
}

struct node* insert(struct node* root, int val){
    if(root == NULL)
        return newNode(val);

    if(val < root->data)
        root->left = insert(root->left, val);
    else
        root->right = insert(root->right, val);

    return root;
}

int search(struct node* root, int key){
    if(root == NULL)
        return 0;
    if(root->data == key)
        return 1;
    if(key < root->data)
        return search(root->left, key);
    else
        return search(root->right, key);
}

int main(){
    struct node* root = NULL;

    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);

    int key = 40;
    if(search(root, key))
        printf("%d found", key);
    else
        printf("%d not found", key);

    return 0;
}
