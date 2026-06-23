#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    int num;
    char name[50];
    int marks[20];
    float avr;
} TStudent;

int main() {
    TStudent students[30]; 
    TStudent temp; 
    
    int studentCount = 0;
    int subjectCount = 0;
    int choice;
    int i, j; 
    int found;
    int retakeFound;
    int needsRetake;

    printf("Enter number of subjects (Max 20): ");
    scanf("%d", &subjectCount);
    while (subjectCount < 1 || subjectCount > 20) {
        printf("Invalid! Enter a value between 1 and 20: ");
        scanf("%d", &subjectCount);
    }

    printf("Enter number of students (Max 30): ");
    scanf("%d", &studentCount);
    while (studentCount < 1 || studentCount > 30) {
        printf("Invalid! Enter a value between 1 and 30: ");
        scanf("%d", &studentCount);
    }

    for (i = 0; i < studentCount; i++) {
        printf("\n--- Student %d ---\n", i + 1);
        printf("Enter Roll Number: ");
        scanf("%d", &students[i].num);

        printf("Enter Name: ");
        scanf(" %[^\n]", students[i].name); 

        int sum = 0;
        printf("Enter %d marks (from 2 to 6):\n", subjectCount);
        for (j = 0; j < subjectCount; j++) {
            do {
                printf("  Subject %d mark: ", j + 1);
                scanf("%d", &students[i].marks[j]);
                if (students[i].marks[j] < 2 || students[i].marks[j] > 6) {
                    printf("  [!] Invalid! Grade must be between 2 and 6.\n");
                }
            } while (students[i].marks[j] < 2 || students[i].marks[j] > 6);
            
            sum += students[i].marks[j];
        }
        students[i].avr = (float)sum / subjectCount;
    }

    do {
        printf("\n================ OUTPUT MENU ================\n");
        printf("1. Display Sorted by Number (1, 2, 3...)\n");
        printf("2. Display Sorted by Alphabetic Order\n");
        printf("3. Display Sorted by Average Grade\n");
        printf("4. Display Students Eligible for Tuition (Average >= 5.5)\n");
        printf("5. Display Students Who Need to Retake Exams (Got a 2)\n");
        printf("6. Exit\n");
        printf("==============================================\n");
        printf("Enter how you want to output it (1-6): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                for (i = 0; i < studentCount - 1; i++) {
                    for (j = 0; j < studentCount - i - 1; j++) {
                        if (students[j].num > students[j + 1].num) {
                            temp = students[j];
                            students[j] = students[j + 1];
                            students[j + 1] = temp;
                        }
                    }
                }
                
                printf("\n--- Students Sorted by Number ---\n");
                for (i = 0; i < studentCount; i++) {
                    printf("Num: %d | Name: %s | Average: %.2f\n", students[i].num, students[i].name, students[i].avr);
                }
                break;

            case 2:
                for (i = 0; i < studentCount - 1; i++) {
                    for (j = 0; j < studentCount - i - 1; j++) {
                        if (strcmp(students[j].name, students[j + 1].name) > 0) {
                            temp = students[j];
                            students[j] = students[j + 1];
                            students[j + 1] = temp;
                        }
                    }
                }

                printf("\n--- Students Sorted Alphabetically ---\n");
                for (i = 0; i < studentCount; i++) {
                    printf("Name: %-20s | Num: %d | Average: %.2f\n", students[i].name, students[i].num, students[i].avr);
                }
                break;

            case 3:
                for (i = 0; i < studentCount - 1; i++) {
                    for (j = 0; j < studentCount - i - 1; j++) {
                        if (students[j].avr < students[j + 1].avr) {
                            temp = students[j];
                            students[j] = students[j + 1];
                            students[j + 1] = temp;
                        }
                    }
                }

                printf("\n--- Students Sorted by Average Grade ---\n");
                for (i = 0; i < studentCount; i++) {
                    printf("Average: %.2f | Num: %d | Name: %s\n", students[i].avr, students[i].num, students[i].name);
                }
                break;

            case 4:
                printf("\n--- Tuition Eligibility (Average >= 5.5) ---\n");
                found = 0;
                for (i = 0; i < studentCount; i++) {
                    if (students[i].avr >= 5.5) {
                        printf("Num: %d | Name: %-20s | Average: %.2f\n", students[i].num, students[i].name, students[i].avr);
                        found = 1;
                    }
                }
                if (!found) {
                    printf("No students qualify for tuition.\n");
                }
                break;

            case 5:
                printf("\n--- Students Who Need to Retake Exams ---\n");
                retakeFound = 0;
                for (i = 0; i < studentCount; i++) {
                    needsRetake = 0;
                    for (j = 0; j < subjectCount; j++) {
                        if (students[i].marks[j] == 2) {
                            needsRetake = 1;
                            break;
                        }
                    }
                    if (needsRetake) {
                        printf("Num: %d | Name: %-20s | Has a grade of 2\n", students[i].num, students[i].name);
                        retakeFound = 1;
                    }
                }
                if (!retakeFound) {
                    printf("No students need to retake exams.\n");
                }
                break;

            case 6:
                printf("Exiting program. Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Choose between 1 and 6.\n");
        }
    } while (choice != 6);

    return EXIT_SUCCESS;
}