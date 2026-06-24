//Да се намери най-голямата цифра в дадено естествено число

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

    int max = 0;

    while(n > 0)
    {
        int x = n % 10;

        if(x > max)
        {
            max = x;
        }

        n/=10;
    }

    printf("The maximum number is %d",max);

    return EXIT_SUCCESS;
}