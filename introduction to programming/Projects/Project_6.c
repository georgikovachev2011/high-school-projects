//цикъл с постусловие. Мax от n числа

#include <stdio.h>

int main()
{
    int n;
    int a;

    printf("Enter count of n=");
    scanf("%d",&n);
    while (n < 1)
    {
        printf("Enter count of n=");
        scanf("%d",&n);
    }

    printf("Enter a=");
    scanf("%d",&a);

    int max = a;
    int count = 2;

    do {
        printf("Enter a=");
        scanf("%d",&a);

        if (a > max)
        {
            max = a;
        }

        count++;
    } while (count <= n);

    printf("The maximum number is %d",max);

    return 0;
}