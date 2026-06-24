//Да се получи числото m, записано с четните цифри на n

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Enter n=");
    scanf("%d",&n);

    while(n<=0)
    {
        printf("Enter n=");
        scanf("%d",&n);
    }

    int multy = 1;
    int m = 0;
    int true = 0;

    while (n > 0)
    {
        int x = n % 10;

        if (x % 2 == 0)
        {
            m = m + x * multy;
            multy = multy * 10;
            true = 1;
        }

        n = n / 10;
    }

    if (true == 1)
    {
        printf("m= %d", m);
    }
    else
    {
        printf("There is no even number");
    }



    return EXIT_SUCCESS;
}