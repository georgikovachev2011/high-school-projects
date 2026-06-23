


#include <stdio.h>
#include <stdlib.h>

int is_leap_year(int year) {
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

int main() {
    int day;
    int month;
    int year;
    int days_in_month;

    printf("Enter your date of birth\n");

    printf("Day: ");
    scanf("%d", &day);

    printf("Month: ");
    scanf("%d", &month);

    printf("Year: ");
    scanf("%d", &year);

    
    if (year < 1 || month < 1 || month > 12 || day < 1) {
        printf("Error: Invalid date.\n");
        return EXIT_FAILURE;
    }


    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days_in_month = 31;
            break;
        case 4: case 6: case 9: case 11:
            days_in_month = 30;
            break;
        case 2:
            days_in_month = is_leap_year(year) ? 29 : 28;
            break;
        default:
            printf("Error: Invalid month.\n");
            return EXIT_FAILURE;
    }

    if (day > days_in_month) {
        printf("Error: Invalid date.\n");
        return EXIT_FAILURE;
    }

    
    if (month < 3) {
        month += 12;
        year--;
    }

    int h = (day + (13 * (month + 1)) / 5 + year + (year / 4) - (year / 100) + (year / 400)) % 7;

    printf("You were born on a ");

    switch (h) {
        case 0: printf("Saturday"); break;
        case 1: printf("Sunday"); break;
        case 2: printf("Monday"); break;
        case 3: printf("Tuesday"); break;
        case 4: printf("Wednesday"); break;
        case 5: printf("Thursday"); break;
        case 6: printf("Friday"); break;
    }

    return EXIT_SUCCESS;
}