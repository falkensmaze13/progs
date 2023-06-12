#include <stdio.h>

void reverseArrayUsingIndex(int arr[], int size) {
    int i, temp;
    for (i = 0; i < size / 2; i++) {
        temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

void reverseArrayUsingPointer(int arr[], int size) {
    int *start = arr;
    int *end = arr + size - 1;
    int temp;

    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

void displayArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    displayArray(arr, size);

    reverseArrayUsingIndex(arr, size);
    printf("Reversed array using index notation: ");
    displayArray(arr, size);

    reverseArrayUsingPointer(arr, size);
    printf("Reversed array using pointer notation: ");
    displayArray(arr, size);

    return 0;
}

