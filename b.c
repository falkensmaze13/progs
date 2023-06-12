#include <stdio.h>

int main() {
    long number, originalNumber, reverseNumber = 0, remainder;
    scanf("%ld", &number);
    originalNumber = number;
    while (number != 0) {
        remainder = number % 10;
        reverseNumber = reverseNumber * 10 + remainder;
        number /= 10;
    }
    printf("Reverse of the number: %ld\n", reverseNumber);
    if (originalNumber == reverseNumber) {
        printf("The number is a palindrome.\n");
    } else {
        printf("The number is not a palindrome.\n");
    }
    return 0;
}

