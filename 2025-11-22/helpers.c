#include <stdio.h>
#include "helpers.h"

int get_int_input(char * prompt)
{
    int input;

    printf("%s", prompt);

    while (scanf("%d", &input) != 1)
    {
        printf("Invalid input try again.\n");
        printf("%s", prompt);
    }

    return input;
}