#include <stdio.h>

void printUnion(int arr1[], int size1, int arr2[], int size2) {
    int i = 0, j = 0;

    printf("Union of the arrays: ");

    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            printf("%d ", arr1[i++]);
        } else if (arr2[j] < arr1[i]) {
            printf("%d ", arr2[j++]);
        } else {
            printf("%d ", arr1[i++]);
            j++;
        }
    }

    while (i < size1) {
        printf("%d ", arr1[i++]);
    }
    while (j < size2) {
        printf("%d ", arr2[j++]);
    }

    printf("\n");
}

void printIntersection(int arr1[], int size1, int arr2[], int size2) {
    int i = 0, j = 0;

    printf("Intersection of the arrays: ");

    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            i++;
        } else if (arr2[j] < arr1[i]) {
            j++;
        } else {
            printf("%d ", arr1[i++]);
            j++;
        }
    }

    printf("\n");
}

int main() {
    int arr1[] = {1, 2, 4, 5, 6};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {2, 3, 5, 7};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    printUnion(arr1, size1, arr2, size2);
    printIntersection(arr1, size1, arr2, size2);

    return 0;
}

