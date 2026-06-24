#include <stdio.h>
#include <string.h>

char *copy_string(char *dest, const char *src) {
    return strcpy(dest, src);
}

int main() {
    char s1[100];
    char s2[100];
    
    printf("Enter the string to copy: ");
    fgets(s2, 100, stdin);
    
    for (int i = 0; s2[i]; i++) {
        if (s2[i] == '\n') {
            s2[i] = '\0'; 
            break;
        }
    }
    
    copy_string(s1, s2);
    
    printf("Copied string: %s\n", s1);
    
    return 0;
}