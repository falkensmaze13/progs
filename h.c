#include <stdio.h>

int strend(const char *s, const char *t) {
    int s_len = 0, t_len = 0;

    while (s[s_len] != '\0') {
        s_len++;
    }
    while (t[t_len] != '\0') {
        t_len++;
    }

    if (t_len > s_len) {
        return 0;
    }

    while (t_len > 0) {
        if (s[s_len - 1] != t[t_len - 1]) {
            return 0; 
        }
        s_len--;
        t_len--;
    }

    return 1; 
}

int main() {
    const char *s1 = "Hello, world!";
    const char *t1 = "world!";
    printf("%d\n", strend(s1, t1)); 

    const char *s2 = "Hello, world!";
    const char *t2 = "Hello";
    printf("%d\n", strend(s2, t2)); 

    const char *s3 = "Hello, world!";
    const char *t3 = "planet";
    printf("%d\n", strend(s3, t3)); 

    return 0;
}

