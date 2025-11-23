//Това разменя местата на а и б 1-ри начин

#include <stdio.h>

void main() {
    int a;
    int b;
    int c;

    printf("Enter a number: ");
    scanf("%d", &a);

    printf("Enter another number: ");
    scanf("%d", &b);

    c = a;
    a = b;
    b = c;

    printf("%d and %d", a, b);
}