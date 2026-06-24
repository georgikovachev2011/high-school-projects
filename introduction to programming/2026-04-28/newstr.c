#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    char newStr[100];
    int j = 0;
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < '0' || str[i] > '9') {
            newStr[j++] = str[i];
        }
    }
    newStr[j] = '\0';
    
    printf("String after removing numbers: %s", newStr);
    
    return 0;
}
