#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    for (int i = 0; str[i]; i++) {
        if (str[i] == '\n') str[i] = '\0'; 
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');
        }
    }
    
    printf("String in uppercase: %s", str);
    return 0;
}