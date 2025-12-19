#include <stdio.h>
int main(){
    char name [20];
    int roll;
    int marks[5];
    int i;
    
    printf("enter your name: ");
    scanf("%s",name);
    
    printf("enter your roll: ");
    scanf("%d",&roll);
    
    printf("enter marks of 5 sub: \n");
    for(i=0; i<5; i++){
        scanf("%d",&marks[i]);
    }
    printf("Student details");
    printf("Name: %s \n",name);
    printf("roll no. %d \n",roll);
    printf("marks: \n");
    
    for(i=0; i<5; i++){
        printf("subject %d : %d \n",i+1,marks[i]);
    }
    return 0;
}
