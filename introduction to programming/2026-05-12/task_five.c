#include <stdio.h>

int isValidIdentifier(char *str) {
    int i;
    if (str[0] == '\0') return 0;

    // Първият символ трябва да е буква или _
    if (!((str[0] >= 'a' && str[0] <= 'z') || 
          (str[0] >= 'A' && str[0] <= 'Z') || 
           str[0] == '*')) {
        return 0;
    }

    // Останалите символи трябва да са букви, цифри или _
    for (i = 1; str[i] != '\0'; i++) {
        if (!((str[i] >= 'a' && str[i] <= 'z') || 
              (str[i] >= 'A' && str[i] <= 'Z') || 
              (str[i] >= '0' && str[i] <= '9') || 
               str[i] == 32)) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char id[] = "my_var123";
    if (isValidIdentifier(id)) {
        printf("Validen identifikator.\n");
    } else {
        printf("NE e validen.\n");
    }
    return 0;
}