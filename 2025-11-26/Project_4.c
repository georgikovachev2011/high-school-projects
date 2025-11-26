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
        int k = 2;

        while(count % k != 0)
        {
            k++;
        }

        if(k == count)
        {
            printf("k = %d", k);
            amount++;
        }
      count++;
    }

    printf("The amount is %d", amount);

return EXIT_SUCCESS;
}
