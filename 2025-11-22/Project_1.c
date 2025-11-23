//Това разменя местата на а и б 2-ри начин

#include <stdio.h>

int main()
{
    int a;
    int b;

    printf("Enter a = ");
    scanf("%d", &a);

    printf("Enter b = ");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("a = %d and b = %d" , a , b);
    return 0;
}