//сравнение на 3 числа вариант 2

#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    int max;

    printf("Enter a=");
    scanf("%d", &a);

    printf("Enter b=");
    scanf("%d", &b);

    printf("Enter c=");
    scanf("%d", &c);

    max = a;

    if (b > max)
    {
        max = b;
    }

    if (c > max)
    {
        max = c;
    }

    printf("The maximum number is %d", max);

    return 0;
}