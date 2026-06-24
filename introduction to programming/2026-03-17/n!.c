#include <stdio.h>
#include <stdlib.h>

int factorial (int n) {
    int p = 1;
    for (int i = 1; i <= n; i++) {
        p *= i;
    }

    return p;
}

int factorial_recursive (int n) {
    if (n == 0) {
        return 1;
    }

    return n * factorial_recursive(n - 1);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial of %d is %d\n", n, factorial(n));
    printf("Factorial of %d is %d\n", n, factorial_recursive(n));
    return EXIT_SUCCESS;
}