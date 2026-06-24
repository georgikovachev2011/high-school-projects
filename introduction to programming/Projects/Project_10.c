//Среден успех на учениците от класа

#include <stdio.h>

int main()
{
    int students;
    int sum;
    int student_score;
    int student_count;
    double average;

    printf("Enter students=");
    scanf("%d", &students);

    while (students < 1 || students > 30)
    {
        printf("Enter students=");
        scanf("%d", &students);
    }

    sum = 0;
    student_count = 1;

    while (student_count <= students)
    {
        student_score = 0;

        while (student_score < 2 || student_score > 6)
        {
            printf("Enter student_score=");
            scanf("%d", &student_score);
        }

        sum = sum + student_score;
        student_count = student_count + 1;
    }

    average = (double)sum / students;

    printf("Average = %.2f", average);

    return 0;
}