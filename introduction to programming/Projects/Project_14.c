#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    int amount_numbers;

    printf("Enter the amount of numbers you want to Add, Subtract, Multiply or Divide: ");
    scanf("%d", &amount_numbers);

    while (amount_numbers <= 1) {
        printf("Enter the amount of numbers you want to Add, Subtract, Multiply or Divide: ");
        scanf("%d", &amount_numbers);
    }

    float number, result;


    char operation;
    printf("A = ADD, S = Subtract, M = Multiply, D = Divide\n");
    printf("Enter operation: ");
    scanf(" %c", &operation);
    operation = toupper(operation);

    printf("Enter number = ");
    scanf("%f", &number);
    result = number;

    int count = 1;
    while (count < amount_numbers) {
        printf("Enter number = ");
        scanf("%f", &number);

        if (operation == 'A')
            result += number;
        else if (operation == 'S')
            result -= number;
        else if (operation == 'M')
            result *= number;
        else if (operation == 'D') {
            if (number == 0) {
                printf("Error: Cannot divide by zero!");
                return 1;
            }
            result /= number;
        }

        count++;
    }

    printf("Result = %.2f\n", result);

    return EXIT_SUCCESS;
}