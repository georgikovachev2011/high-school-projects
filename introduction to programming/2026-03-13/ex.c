#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int equation(float a, float b, float c, float *x1, float *x2) {
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                return 1;
            } 
            else {
                return 2;
            }
        } 
        else {
            *x1 = -c / b;
            return 3;
        }
    } 
    else {
        if (b == 0) {
            if (c == 0) {
                *x1 = 0;
                return 4;
            } 
            else {
                if (-c / a < 0) {
                    return 2;
                }
                *x1 = sqrt(-c / a);
                *x2 = -sqrt(-c / a);
                return 5;
            }
        }
        else if (c == 0) {
            *x1 = 0;
            *x2 = -b / a;
            return 5;
        } 
        else {
            float discriminant = b * b - 4 * a * c;
            if (discriminant > 0) {
                *x1 = (-b + sqrt(discriminant)) / (2 * a);
                *x2 = (-b - sqrt(discriminant)) / (2 * a);
                return 5;
            } else if (discriminant == 0) {
                *x1 = -b / (2 * a);
                return 6;
            } else {
                return 2;
            }
        }
    }

    return 0;
}

int main() {
    float a, b, c;
    float x1, x2;

    printf("Enter the coefficients a, b, c of the quadratic equation ax^2 + bx + c = 0:\n");

    printf("a: ");
    scanf("%f", &a);
    printf("b: ");
    scanf("%f",\ &b);
    printf("c: ");
    scanf("%f", &c);

    switch (equation(a, b, c, &x1, &x2)) {
        case 1:
            printf("Every x is a solution.\n");
            break;

        case 2:
            printf("No solution exists.\n");
            break;

        case 3:
            printf("The solution is: %f\n", x1);
            break;

        case 4:
            printf("The solution is: %f\n", x1);
            break;

        case 5:
            printf("The solutions are: %f and %f\n", x1, x2);
            break;

        case 6:
            printf("The solution is: %f\n", x1);
            break;

        default:
            printf("Unexpected error.\n");
            break;
    }

    return EXIT_SUCCESS;
}