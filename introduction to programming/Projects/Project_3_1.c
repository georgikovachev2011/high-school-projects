//Да се определи дали дадена цифра се среща в записа на естествено число

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Enter n=");
    scanf("%d",&n);

    while(n < 0)
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

    int FOUND = 0;
    int x;

    while((n > 0) && (FOUND != 1))
    {
        x = n % 10;
        if(x == a)
        {
            FOUND = 1;
        }
        n = n / 10;
    }

    if(FOUND == 1)
    {
        printf("Found");
    }
    else
    {
        printf("Not Found");
    }

    return EXIT_SUCCESS;
}
