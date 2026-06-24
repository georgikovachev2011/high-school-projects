#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>

//Сума на естествените числа от 1 до n

int sum(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    return sum;
}

//Брой делители на естественото число n

int count_divisors(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }

    return count;
}

//Брой на цифрите на естественото число n

int count_digits(int n) {
    int count = 0;
    while (n > 0) {
        n /= 10;
        count++;
    }
   
    return count;
}

//Сума от цифрите на естественото число n

int sum_digits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

//Да се получи числото m, записано с цифрите на естественото число n наобратно

int reverse_digits(int n) {
    int m = 0;
    while (n > 0) {
        m = m * 10 + n % 10;
        n /= 10;
    }

    return m;
}

//Да се получи числото m, записано с четните цифри на естественото число n

int even_digits(int n) {
    int m = 0;
    while (n > 0) {
        int digit = n % 10;
        if (digit % 2 == 0) {
            m = m * 10 + digit;
        }
        n /= 10;
    }

    return m;
}

//а на степен n

int power(int a, int n) {
    int result = 1;
    for (int i = 0; i < n; i++) {
        result *= a;
    }

    return result;
}

//Да се изведе триъгълна фигура от символи (n- брой редове, c - символ)

void print_triangle(int n, char c) {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            printf("%c", c);
        }
        printf("\n");
    }
}

int main() {
    int cases = 0;
    int n, a;
    char c;

    while (cases != 8) {
        printf("All functions are:\n");
        printf("0. Sum of natural numbers from 1 to n\n");
        printf("1. Count of divisors of n\n");
        printf("2. Count of digits of n\n");
        printf("3. Sum of digits of n\n");
        printf("4. Reverse digits\n");
        printf("5. Even digits number\n");
        printf("6. a^n\n");
        printf("7. Print triangle\n");
        printf("8. Exit\n");

        printf("Enter the number of the function: ");
        scanf("%d", &cases);

        switch (cases) {
        case 0:
            printf("Enter n: ");
            scanf("%d", &n);
            printf("Sum = %d\n", sum(n));
            break;

        case 1:
            printf("Enter n: ");
            scanf("%d", &n);
            printf("Divisors count = %d\n", count_divisors(n));
            break;

        case 2:
            printf("Enter n: ");
            scanf("%d", &n);
            printf("Digits count = %d\n", count_digits(n));
            break;

        case 3:
            printf("Enter n: ");
            scanf("%d", &n);
            printf("Sum of digits = %d\n", sum_digits(n));
            break;

        case 4:
            printf("Enter n: ");
            scanf("%d", &n);
            printf("Reversed number = %d\n", reverse_digits(n));
            break;

        case 5:
            printf("Enter n: ");
            scanf("%d", &n);
            printf("Even digits number = %d\n", even_digits(n));
            break;

        case 6:
            printf("Enter a: ");
            scanf("%d", &a);
            printf("Enter n: ");
            scanf("%d", &n);
            printf("Result = %d\n", power(a, n));
            break;

        case 7:
            printf("Enter n: ");
            scanf("%d", &n);
            printf("Enter character: ");
            scanf(" %c", &c);
            print_triangle(n, c);
            break;

        case 8:
            printf("Goodbye!\n");
            break;

        default:
            printf("Invalid choice!\n");
        }
    }

    return EXIT_SUCCESS;
}