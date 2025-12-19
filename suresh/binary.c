#include <stdio.h>

int binary(int arr[], int key, int start, int end) {
    int mid;

    while (start <= end) {
        mid = (start + end) / 2;

        if (arr[mid] == key) {
            return mid;
        }
        else if (arr[mid] > key) {
            return binary(arr, key, start, mid - 1);
        }
        else {
            return binary(arr, key, mid + 1, end);
        }
    }
    return -1;   
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 7, 9};   
    int key = 5;

    int start = 0;
    int end = 6;

    int result = binary(arr, key, start, end);
    printf("%d", result);

    return 0;
}
