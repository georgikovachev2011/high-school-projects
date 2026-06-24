#include <stdio.h>

int power(int a, int n) {
    if (n == 0) {
        return 1;
    }

    return a * power(a, n - 1);
}

int main() {
    int a, n;
    printf("Enter a and n: ");
    scanf("%d %d", &a, &n);

    printf("%d^%d = %d\n", a, n, power(a, n));
    return 0;
}