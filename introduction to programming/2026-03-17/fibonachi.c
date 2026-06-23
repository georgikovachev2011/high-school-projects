#include <stdio.h>
#include <stdlib.h>

int fibonachi(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonachi(n - 1) + fibonachi(n - 2);
}

int fibonachi_iterative(int n) {
    if (n <= 1) {
        return 1;
    }
    int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

int main() {
    int n;
    printf("Enter the Fibonacci index: ");
    scanf("%d", &n);

    printf("Fibonacci number at index %d (iterative): %d\n", n, fibonachi_iterative(n));
    printf("Fibonacci number at index %d (recursive): %d\n", n, fibonachi(n));
    return 0;
}