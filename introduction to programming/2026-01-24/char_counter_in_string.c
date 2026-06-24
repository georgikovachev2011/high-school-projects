#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char ch;
    int count = 0;
    char *ptr;

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

    ptr = str;

    while ((ptr = strchr(ptr, ch)) != NULL) {
        count++;
        ptr++;
    }

    printf("Character '%c' occurs %d times in the string.\n", ch, count);

    return 0;
}