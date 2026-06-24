//Да се определи дали дадено естествено число n (n>=2) е просто или не

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Enter n=");
    scanf("%d",&n);

    while(n < 2)
    {
        printf("Enter n=");
        scanf("%d",&n);
    }

    int count = 2;

    while (count < n && n % count != 0)
    {
        count++;
    }


    if (n == count)
    {
        printf("The number is prime");
    }
    else
    {
        printf("The number is not prime");
    }

    return EXIT_SUCCESS;
}