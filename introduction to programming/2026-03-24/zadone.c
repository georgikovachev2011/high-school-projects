#include <stdio.h>

void reverse(char c) {
    if (c == '.') {
        putchar('.');
        return;
    }

    char next = getchar();
    reverse(next);
    putchar(c);
}

int main() {
    char c = getchar();
    reverse(c);
    return 0;
}