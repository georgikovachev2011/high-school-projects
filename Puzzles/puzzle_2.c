#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num_one;
    int num_two;

    printf("num_one =");
    scanf("%d", &num_one);

    printf("num_two =");
    scanf("%d", &num_two);

    int sum = num_one + num_two;

    if (sum < 50)
    {
        printf("%d", sum);
    }
    else
    {
        printf("None");
    }

    return EXIT_SUCCESS;
}
