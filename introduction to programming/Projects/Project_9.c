//Сумата на n произволни числа

#include <stdio.h>

int main()
{
    int n;
    int number;

    printf("Enter n=");
    scanf("%d",&n);

    while(n < 1)
    {
        printf("Enter n=");
        scanf("%d",&n);
    }
    int sum = 0;
    int count = 1;

    while (count <= n)
    {
        printf("Enter number=");
        scanf("%d",&number);
        sum = sum + number;
        count = count + 1;
    }
    printf("Sum=%d",sum);
    return 0;
}
