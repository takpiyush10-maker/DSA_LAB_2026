#include <stdio.h>

int main() {
    int arr[100], n, i;
    int element, position;

    // Input array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Insert Element
    printf("\nEnter the position to insert (1 to %d): ", n + 1);
    scanf("%d", &position);

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    if(position < 1 || position > n + 1) {
        printf("Invalid Position!\n");
    } else {
        for(i = n; i >= position; i--) {
            arr[i] = arr[i - 1];
        }
        arr[position - 1] = element;
        n++;

        printf("\nArray after insertion:\n");
        for(i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    }

    // Delete Element
    printf("\n\nEnter the position to delete (1 to %d): ", n);
    scanf("%d", &position);

    if(position < 1 || position > n) {
        printf("Invalid Position!\n");
    } else {
        for(i = position - 1; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;

        printf("\nArray after deletion:\n");
        for(i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}