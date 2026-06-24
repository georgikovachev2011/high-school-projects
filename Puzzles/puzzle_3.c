
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("n =");
    scanf("%d", &n);

    int count = 1;
    int sum = 0;

    while (count <= n)
    {
        int a;

        printf("a =");
        scanf("%d", &a);

        if (a % 2 == 0)
        {
            sum += a;
        }

        count++;
    }

    printf("sum = %d", sum);

    return EXIT_SUCCESS;
}