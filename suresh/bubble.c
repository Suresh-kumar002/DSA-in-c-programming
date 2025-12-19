#include <stdio.h>

int main() {
    int i,j,temp;
    int arr[10] = {4,6,3,7,1,9,2};  
    for(j=0; j<7; j++){
        for(i=0; i<6; i++){
        
            if(arr[i]>arr[i+1]){
               temp=arr[i+1];
               arr[i+1]=arr[i];
               arr[i]=temp;
            }
        }
    }
    printf("after sorted array is: ");
    for(i=0; i<7; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
