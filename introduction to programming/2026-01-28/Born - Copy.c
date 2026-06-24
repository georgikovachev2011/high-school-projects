


#include <stdio.h>
#include <stdlib.h>

int main() {
    int day;
    int month;
    int year;

    printf("\nEnter your date of birth");
    printf("\nDay: ");
    scanf("%d", &day);

    printf("\nMonth: ");
    scanf("%d", &month);

    printf("\nYear: ");
    scanf("%d", &year);

    if (month < 3) {
        month += 12;
        year--;
    }

    int d = day;
    int m = month;
    int y = year;

    int day_of_week = (d + (13 * (m + 1)) / 5 + y + (y / 4) - (y / 100) + (y / 400)) % 7;

    printf("\nYou were born on a ");

    switch (day_of_week) {
        case 0: printf("Saturday"); break;
        case 1: printf("Sunday"); break;
        case 2: printf("Monday"); break;
        case 3: printf("Tuesday"); break;
        case 4: printf("Wednesday"); break;
        case 5: printf("Thursday"); break;
        case 6: printf("Friday"); break;
    }

    printf(".\n");

    return EXIT_SUCCESS;
}