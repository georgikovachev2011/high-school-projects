//Сумата на числата от  1 до n - с постусловие

#include<stdio.h>

int main()
{
    int n;

    printf("Enter the count of numbers : ");
    scanf("%d",&n);

    int sum = 0;
    int count = 1;

    do {
        sum = sum + count;
        count = count + 1;
    } while(count <= n);

    printf("The sum is %d",sum);

    return 0;
}