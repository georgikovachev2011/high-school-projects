//Да се изведат делителите на естественото число n и техния брой

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Enter n= ");
    scanf("%d", &n);


    while (n < 0)
    {
        printf("Enter n= ");
        scanf("%d", &n);
    }

    int amount = 0;
    int count =1;

    while (count <= n)
    {
        if (n % count == 0)
        {
            printf("The divisor is %d", count);
            amount++;
        }
        count++;
    }

    printf("The amount is %d", amount);

    return EXIT_SUCCESS;
}
