


#include <stdio.h>
#include <stdlib.h>

#define MAX_STUDENTS 30
#define MIN_STUDENTS 1
#define MIN_SCORE 2
#define MAX_SCORE 6

int main() {
    int students[MAX_STUDENTS];
    int n;

    do {
        printf("Enter number of students (1 - 30): ");
        scanf("%d", &n);
    } while (n < MIN_STUDENTS || n > MAX_STUDENTS);

    int sum = 0;

    for (int i = 0; i < n; i++) {
        do {
            printf("Enter score for student %d (2 - 6): ", i + 1);
            scanf("%d", &students[i]);
        } while (students[i] < MIN_SCORE || students[i] > MAX_SCORE);

        sum += students[i];
    }

    double average = (double)sum / n;
    printf("\nAverage score: %.2f\n", average);

    return EXIT_SUCCESS;
}
