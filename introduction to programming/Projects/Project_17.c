
#include <stdio.h>
#include <stdlib.h>

int main() {
    int number;
    int allowed = 0;
    int rejected = 0;

    while (1) {
        printf("Enter your number:");
        scanf("%d", &number);

        if (number == 0) {
            break;
        }

        if (number >= 1000 && number <= 99999) {
            if (number % 3 == 0 || number % 10 == 5) {
                if (number % 100 == 0) {
                    rejected ++;
                }
                else {
                    allowed ++;
                }
            }
        }
    }
    printf("%d", allowed);
    printf("%d", rejected);
}