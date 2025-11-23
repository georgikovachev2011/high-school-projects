//Брой на цифрите в естествено число

#include <stdio.h>

int main()
{
    int n;
    int count;

    printf("Enter a number");
    scanf("%d",&n);

    while(n < 1)
    {
        printf("Enter a number");
        scanf("%d",&n);
    }

    count = 0;

    while(n!=0)
    {
        count = count + 1;
        n = n/10;
    }

    printf("Number of digits in a natural number is %d" , count);
    return 0;
}