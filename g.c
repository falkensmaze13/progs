#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void removeDuplicates(char *str) {
    int len = strlen(str);
    if (len < 2) {
        return; 
    }

    bool charSet[256] = { false }; 
    int writeIndex = 0;

    for (int readIndex = 0; readIndex < len; readIndex++) {
        char currentChar = str[readIndex];

        if (!charSet[(unsigned char)currentChar]) {
            str[writeIndex++] = currentChar;
            charSet[(unsigned char)currentChar] = true;
        }
    }

    str[writeIndex] = '\0'; 
}

int main() {
    char str1[] = "Hello";
    printf("Original string: %s\n", str1);
    removeDuplicates(str1);
    printf("String without duplicates: %s\n", str1);

    char str2[] = "Testing";
    printf("Original string: %s\n", str2);
    removeDuplicates(str2);
    printf("String without duplicates: %s\n", str2);

    char str3[] = "deadbeef";
    printf("Original string: %s\n", str3);
    removeDuplicates(str3);
    printf("String without duplicates: %s\n", str3);

    return 0;
}

