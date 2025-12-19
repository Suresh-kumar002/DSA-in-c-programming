

#include <stdio.h>

int main() {
    int arr[50], n, i, pos, val, choice;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if(n > 50) {
        printf("Max size is 50\n");
        return 0;
    }

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\n1. Insert\n2. Delete\nEnter your choice: ");
    scanf("%d", &choice);

    if(choice == 1) {
        if(n >= 50) {
            printf("Array is full\n");
        } else {
            printf("Enter position (0-based): ");
            scanf("%d", &pos);

            printf("Enter value: ");
            scanf("%d", &val);

            if(pos < 0 || pos > n) {
                printf("Invalid position\n");
            } else {
                for(i = n; i > pos; i--) {
                    arr[i] = arr[i - 1];
                }
                arr[pos] = val;
                n++;
            }
        }
    }
    else if(choice == 2) {
        printf("Enter position to delete (0-based): ");
        scanf("%d", &pos);

        if(pos < 0 || pos >= n) {
            printf("Invalid position\n");
        } else {
            for(i = pos; i < n - 1; i++) {
                arr[i] = arr[i + 1];
            }
            n--;
        }
    }
    else {
        printf("Invalid choice\n");
    }

    printf("Updated array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}