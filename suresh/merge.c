#include <stdio.h>

void merge(int arr[], int low, int mid, int high) {
    int i = low, j = mid + 1, k = 0;
    int temp[10];

    while (i<=mid && j<=high) {
        if (arr[i]<arr[j])
            temp[k++]=arr[i++];
        else
            temp[k++]=arr[j++];
    }

    while (i<=mid)
        temp[k++]=arr[i++];

    while (j<=high)
        temp[k++]=arr[j++];

    for (i=low, k
    =0; i <= high; i++,k++)
        arr[i] = temp[k];
}

void mergeSort(int arr[], int low, int high) {
    int mid;
    if (low<high) {
        mid=(low+high)/2;

        mergeSort(arr, low, mid);       
        mergeSort(arr, mid + 1, high);  
        merge(arr, low, mid, high);     
    }
}

int main() {
    int i;
    int arr[10] = {4, 6, 3, 7, 1, 9, 2};
    int n = 7;

    mergeSort(arr, 0, n - 1);

    printf("after sorted array is: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
