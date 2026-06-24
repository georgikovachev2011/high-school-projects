#include <stdio.h>
#include <stdlib.h>

int main() {
    int h1;
    int m1;
    int h2;
    int m2;

    printf("Enter h1 = ");
    scanf("%d", &h1);

    printf("Enter m1 = ");
    scanf("%d", &m1);

    printf("Enter h2 = ");
    scanf("%d", &h2);

    printf("Enter m2 = ");
    scanf("%d", &m2);

    int minutes = (h2 * 60 + m2) - (h1 * 60 + m1);
    printf("Hours = %d Minutes = %d" , minutes / 60, minutes % 60);
    return EXIT_SUCCESS;
}