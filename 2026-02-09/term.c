#include <stdio.h>
#include <stdlib.h>
#define max_students 30
#define max_subjects 20
#define max_grade 6
#define min_students 1
#define min_subjects 1
#define min_grade 2

int main() {
    int amount_students;
    int amount_subjects;
    int first_counter;
    int second_counter;
    int grade[max_students][max_subjects];
    float avr_student[max_students];
    float avr_subject[max_subjects];
    float avr_class;

    do {
        printf("\nEnter the amount of students: ");
        scanf("%d", &amount_students);
    } while (amount_students > max_students || amount_students < min_students);

    do {
        printf("\nEnter the amount of subjects: ");
        scanf("%d", &amount_subjects);
    } while (amount_subjects > max_subjects || amount_subjects < min_subjects);

    for (first_counter = 0; first_counter < amount_students; first_counter++) {
        for (second_counter = 0; second_counter < amount_subjects; second_counter++) {
            do {
                printf("Enter grade %d for student %d: ", second_counter + 1, first_counter + 1);
                scanf("%d", &grade[first_counter][second_counter]);
            } while (grade[first_counter][second_counter] < min_grade || grade[first_counter][second_counter] > max_grade);
        }
    }

    for (first_counter = 0; first_counter < amount_students; first_counter++) {
        avr_student[first_counter] = 0;
        for (second_counter = 0; second_counter < amount_subjects; second_counter++)
            avr_student[first_counter] += grade[first_counter][second_counter];
        avr_student[first_counter] /= amount_subjects;
    }

    for (second_counter = 0; second_counter < amount_subjects; second_counter++) {
        avr_subject[second_counter] = 0;
        for (first_counter = 0; first_counter < amount_students; first_counter++)
            avr_subject[second_counter] += grade[first_counter][second_counter];
        avr_subject[second_counter] /= amount_students;
    }

    avr_class = 0;
    for (first_counter = 0; first_counter < amount_students; first_counter++)
        for (second_counter = 0; second_counter < amount_subjects; second_counter++)
            avr_class += grade[first_counter][second_counter];
    avr_class /= (amount_students * amount_subjects);

    printf("\nGrades table (last column = average per student):\n");
    for (first_counter = 0; first_counter < amount_students; first_counter++) {
        for (second_counter = 0; second_counter < amount_subjects; second_counter++) {
            printf("%d\t", grade[first_counter][second_counter]);
        }
        printf("%.2f\n", avr_student[first_counter]);
    }

    for (second_counter = 0; second_counter < amount_subjects; second_counter++)
        printf("%.2f\t", avr_subject[second_counter]);
    printf("%.2f\n", avr_class);

    return EXIT_SUCCESS;
}
