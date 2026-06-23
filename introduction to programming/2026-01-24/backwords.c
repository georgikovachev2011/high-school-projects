#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i = 0;
    
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    
    for (int i = 0; str[i]; i++) {
        if (str[i] == '\n') {
            str[i] = '\0'; 
            break;
        }
    }
    
    for (int j = i-1; j >= 0; j--) {
        printf("%c\n", str[j]);
    }
    
    return 0;
}