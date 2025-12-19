#include <stdio.h>

int main() {
    int i,j,temp;
    int arr[10] = {4, 6, 3, 7, 1, 9, 2};

    for (i=0; i<6; i++) {          
        int min=i;

        for (j=i+1; j<7; j++) {  
            if (arr[j]<arr[min]) {
                min=j;
            }
        }

       
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }

    printf("after sorted array is: ");
    for (i=0; i<7; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
