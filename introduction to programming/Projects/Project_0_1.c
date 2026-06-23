//Да се нaмери a на степен n ( а - произволно число, различно от 0, n - цяло число)


#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;

    printf("Enter a=");
    scanf("%5f",&a);

    while (a == 0)
    {
        printf("Enter a=");
        scanf("%5f",&a);
    }

    float n;

    printf("Enter n=");
    scanf("%5f",&n);

    float m;

    if (n > 1)
    {
        m = n;
    }
    else
    {
        m = n * -1;
    }

    int count = 1;
    float multiplier = 1;

    while (count <= m)
    {
        multiplier = a * multiplier;
        count++;
    }

    if (n < 0)
    {
        multiplier = 1 / multiplier ;
    }

    printf("The product of %5f and %5f is %5f", a, n, multiplier);

    return EXIT_SUCCESS;
}