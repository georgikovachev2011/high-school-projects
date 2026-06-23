//Дали има две последователни нули

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    do {
        printf("Enter n=");
        scanf("%d", &n);
    }while (n <= 0);

    int count = 0;

    while(n != 1) {
        if(n % 10 == 0) {
            count++;
        }
        else {
            count = 0;
        }

        n /= 10;

        if (count == 2) {
            break;
        }
    }

    if (count == 2) {
        printf("There are two zeros that are next to each other");
    }
    else {
        printf("There aren't two zeros that are next to each");
    }

    return EXIT_SUCCESS;
}
