#include <stdio.h>

int count(char *s1, char *s2) {
    int c = 0, i, j, match;
    
    if (s2[0] == '\0') return 0;

    for (i = 0; s1[i] != '\0'; i++) {
        match = 1;
        for (j = 0; s2[j] != '\0'; j++) {
            if (s1[i + j] != s2[j]) {
                match = 0;
                break;
            }
        }
        if (match == 1) {
            c++;
            i += j - 1; 
        }
    }
    return c;
}

int main() {
    char s1[] = "hello world, hello universe";
    char s2[] = "hello";
    printf("Sreshtaniq: %d\n", count(s1, s2));
    return 0;
}