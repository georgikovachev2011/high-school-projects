


#include <stdio.h>
#include <stdlib.h>

int main() {
    int count = 0;

    while (count < 255) {
        printf("\n%c -> %d", count, count);
        count++;
    }

    return EXIT_SUCCESS;
}



