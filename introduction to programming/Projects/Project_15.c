//Да се провери дали естественото число n е палиндром

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    do {
        printf("Enter n= ");
        scanf("%d", &n);
    }while (n <= 0);

    int m = n;
    int z = 0;

    while (n != 0) {
        z = z * 10 + n % 10;
        n = n / 10;
    }

    if (z == m) {
        printf("This number is palindrome");
    }
    else {
        printf("This number is not palindrome");
    }

    return EXIT_SUCCESS;
}
