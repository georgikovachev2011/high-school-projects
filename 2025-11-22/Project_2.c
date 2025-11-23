//сравнение на 3 числа вариант 1

#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;

    printf("Enter a=");
    scanf("%d", &a);

    printf("Enter b=");
    scanf("%d", &b);

    printf("Enter c=");
    scanf("%d", &c);

    if (a > b)
    {
        if (a > c)
        {
            printf("%d is greatest", a);
        }
        else
        {
            printf("%d is greatest", c);
        }
    }
    else
    {
        if (b > c)
        {
            printf("%d is greatest", b);
        }
        else
        {
            printf("%d is greatest", c);
        }
    }
}