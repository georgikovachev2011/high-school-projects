#include <stdio.h>

int count_whitespace(const char *str) {
    int count = 0;
    for (int i = 0; str[i]; i++) {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            count++;
        }
    }
    return count;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    
    int whitespace_count = count_whitespace(str);
    printf("Number of whitespace characters: %d\n", whitespace_count);
    
    return 0;
}