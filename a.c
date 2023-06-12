#include <stdio.h>

int main() {
    int rows, i, j, number = 1;
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("%-2d ", number++);
        }
        printf("\n");
    }
    return 0;
}



