#include <stdio.h>

int main() {
    int i, j, temp;
    int arr[10] = {4, 6, 3, 7, 1, 9, 2};

    for (i=1; i<7; i++){ 
        temp=arr[i];
        j=i-1;

        while (j>=0 && arr[j]>temp) {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;      
    }

    printf("after sorted array is: ");
    for (i=0; i<7; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
