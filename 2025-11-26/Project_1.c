//Max от n цели числа, но само тези, които се делят на 3

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count_of_numbers;

    printf("Enter count_of_numbers: ");
    scanf("%d", &count_of_numbers);

    while (count_of_numbers < 1)
    {
        printf("Enter a number: ");
        scanf("%d", &count_of_numbers);
    }

    int max = 1;
    int count = 0;

    while (count < count_of_numbers)
    {
        int number;

        printf("Enter a number: ");
        scanf("%d", &number);

        if (number % 3 == 0)
        {
            if (max == 1) {
                max = number;
            }
            else {
                if (number > max) {
                    max = number;
                }
            }
        }
        count++;
    }
    if (max == 1) {
        printf("There is no number");
    }
    else {
        printf("The max is %d", max);
    }

    return EXIT_SUCCESS;
}