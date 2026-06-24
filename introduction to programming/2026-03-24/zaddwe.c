#include <stdio.h>

void toBinary(int n) {
    if (n == 0) {
        return;
    }

    toBinary(n / 2);
    putchar((n % 2) + '0');
}

int main() {
    int n;
    do{
        printf("Enter a natural number: ");
        scanf("%d", &n);
    } while (n < 0);

    if (n == 0) {
        printf("0");
    } else {
        toBinary(n);
    }

    return 0;
}