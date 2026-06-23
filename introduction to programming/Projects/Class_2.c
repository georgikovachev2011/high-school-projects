


#include <stdio.h>
#include <stdlib.h>

int main() {
    char ch;

    printf("Enter a symbol: ");
    ch = getchar();

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("Latin letter\n");
    }
    else if (ch >= '0' && ch <= '9') {
        printf("Digit\n");
    }
    else {
        printf("Other ASCII symbol\n");
    }

    return EXIT_SUCCESS;
}