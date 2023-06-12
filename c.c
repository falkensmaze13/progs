#include <stdio.h>
#include <stdbool.h>

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }

    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}

int findNextPrime(int number) {
    int nextNumber = number + 1;

    while (true) {
        if (isPrime(nextNumber)) {
            return nextNumber;
        }
        nextNumber++;
    }
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPrime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    int nextPrime = findNextPrime(number);
    printf("The next prime number greater than %d is %d.\n", number, nextPrime);

    return 0;
}

