


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    float result, number;
    char operation;

    printf("Enter number = ");
    scanf("%f", &result);

    while (1)
    {
        printf("\nA = Add, S = Subtract, M = Multiply, D = Divide, E or = Equals");
        printf("\nEnter operation: ");
        scanf(" %c", &operation);

        operation = toupper(operation);


        if (operation == 'E' || operation == '=')
        {
            printf("\nResult = %.2f\n", result);
            break;
        }

        printf("Enter number = ");
        scanf("%f", &number);

        switch (operation)
        {
            case 'A':
            case '+':
                result += number;
                break;

            case 'S':
            case '-':
                result -= number;
                break;

            case 'M':
            case '*':
                result *= number;
                break;

            case 'D':
            case '/':
                while (1)
                {
                    if (number == 0)
                    {
                        printf("Error: Division by zero!\n");
                        printf("Enter another number (non-zero): ");
                        scanf("%f", &number);
                    }
                    else
                    {
                        result /= number;
                        break;
                    }
                }
                break;

            default:
                printf("Invalid operation!\n");
                break;
        }
    }

    return EXIT_SUCCESS;
}