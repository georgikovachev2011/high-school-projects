//Да се получи числото m, записано с цифрите на естественото число n, но в обратен ред
#include<stdio.h>

int main()
{
    int n;
    int m;
    printf("Enter a number");
    scanf("%d",&n);

    while(n < 1)
    {
        printf("Enter a number");
        scanf("%d",&n);
    }

    m = 0;

    do
    {
        m = m * 10 + n % 10;
        n = n / 10;
    } while (n != 0);

    printf("%d",m);
    return 0;
}