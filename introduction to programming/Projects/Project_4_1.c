//Да се изведат простите делители на дадено естествено число и техния брой

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Enter n=");
    scanf("%d", &n);

    while(n < 1)
    {
        printf("Enter n=");
        scanf("%d", &n);
    }

    int amount = 0;
    int count = 2;

    while(count <= n)
    {
        if(n % count == 0)
        {
            int k = 2;

            while(k < count && count % k != 0)
            {
                k++;
            }

            if(k == count)
            {
                printf("%d ", count);
                amount++;
            }
        }

        count++;
    }

    printf("\nThe amount is %d\n", amount);

    return EXIT_SUCCESS;
}

