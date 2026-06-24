#include <stdio.h>
#include <string.h>

int count_char(char *str, char ch) {
    int count = 0;
    char *ptr = str;

    while ((ptr = strchr(ptr, ch)) != NULL) {
        count++;
        ptr++;
    }

    return count;
}

int main() {
    char str[100];
    char ch;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }

    printf("Enter a character to count: ");
    scanf(" %c", &ch);

    int char_count = count_char(str, ch);

    printf("Character '%c' occurs %d times in the string.\n", ch, char_count);

    return 0;
}