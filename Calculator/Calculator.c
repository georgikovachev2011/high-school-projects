
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int amount_numbers;

    printf("Enter the amount of numbers you want to Add, Subtract, Multiply or Divide: ");
    scanf("%d", &amount_numbers);

    while (amount_numbers <= 1)
    {
        printf("Enter the amount of numbers you want to Add, Subtract, Multiply or Divide: ");
        scanf("%d", &amount_numbers);
    }

    float number;
    float sum;
    int count = 1;

    printf("Enter number = ");
    scanf("%f", &number);

    sum = number;

    while (count < amount_numbers)
    {
        char operation;

        printf("A = Add, S = Subtract, M = Multiply, D = Divide ");
        printf("Enter operation: ");
        scanf(" %c", &operation);

        operation = toupper(operation);

        printf("Enter number = ");
        scanf("%f", &number);


        switch (operation)
        {
            case '+':
            case 'A':
                sum += number;
                break;

            case '-':
            case 'S':
                sum -= number;
                break;

            case '*':
            case 'M':
                sum *= number;
                break;

            case '/':
            case 'D':
                if (number == 0)
                {
                    printf("Divided is zero!");
                    return EXIT_FAILURE;
                }
                sum /= number;
                break;
        }

        // if (operation == 'A')
        // {
        //     sum += number;
        // }
        // else if (operation == 'S')
        // {
        //     sum -= number;
        // }
        // else if (operation == 'M')
        // {
        //     sum *= number;
        // }
        // else if (operation == 'D')
        // {
        //     if (number == 0)
        //     {
        //         printf("Error: Cannot divide by zero!");
        //         return 1;
        //     }
        //
        //     sum /= number;
        // }

        count++;
    }

    printf("Result = %.2f", sum);

    return EXIT_SUCCESS;
}