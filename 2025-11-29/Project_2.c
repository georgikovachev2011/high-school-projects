//Да се намери колко пъти дадена цифра се среща в записа на естествено число

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;

    printf("Enter n=");
    scanf("%d",&n);

    while(n <= 0)
    {
        printf("Enter n=");
        scanf("%d",&n);
    }

    int a;

    printf("Enter a=");
    scanf("%d",&a);

    while(a < 0 || a > 9)
    {
        printf("Enter a=");
        scanf("%d",&a);
    }

    int amount = 0;
    int TRUE = 0;

    while(n > 0)
    {
        int x = n % 10;

        if (x == a)
        {
            amount++;
            TRUE = 1;
        }

        n /= 10;
    }

    if (TRUE == 1)
    {
        printf("The maximum amount is %d",amount);
    }
    else
    {
        printf("The number that you have input does not occur");
    }
    return EXIT_SUCCESS;
}