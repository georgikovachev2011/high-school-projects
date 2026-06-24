


#include <stdio.h>
#include <stdlib.h>

int main() {
    int registration_number;
    int allowed = 0;
    int not_allowed = 0;

    printf("\nEnter 0 at the end toe end!");
    printf("\nEnter a registration numbers: ");

    while(1) {
        scanf("%d", &registration_number);

        if (registration_number == 0)
        {
            break;
        }

        if ((registration_number >= 1000 && registration_number <= 9999) &&
            (registration_number % 3 == 0 || registration_number % 10 == 5) &&
            (registration_number % 100 != 0)) {
            allowed ++;
        }
        else {
            not_allowed ++;
        }
    }


    printf("\nThe allowed numbers are: %d", allowed);
    printf("\nThe not-allowed numbers are: %d", not_allowed);

    return EXIT_SUCCESS;
}


