//Сума на цифрите в естествено число
//n = natural number
#include<stdio.h>
int main()
{
    int n;
    int sum;

    printf("Enter a number");
    scanf("%d",&n);

    while(n < 1)
    {
        printf("Enter a number");
        scanf("%d",&n);
    }

    sum = 0;

    while(n != 0)
    {
        sum = sum + n%10;
        n = n/10;
    }
    printf("The sum of the natural numbers is %d" , sum);
    return 0;
}
