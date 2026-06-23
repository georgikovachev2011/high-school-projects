//сравнява 100 числа и извежда най-голямото

#include <stdio.h>

int main ()
{
    int a;

    printf("Enter a= ");
    scanf("%d", &a);

    int max = a;
    int counter = 2;

    while (counter <= 100)
    {
        printf("Enter a= ");
        scanf("%d", &a);

        if (a > max)
        {
            max = a;
        }

        counter++;
    }

    printf("The maximum number is %d", max);

    return 0;
}