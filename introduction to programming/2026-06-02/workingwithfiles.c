#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int num;
    char name[20];
    int marks[20];
    float avrage;
}TStudent;

int main() {
    TStudent s;
    FILE *f;
    int answer = 0;
    int studentsCount;
    int subjectsCount;
    while (answer != 3) {
        printf("Menu:\n");
        printf("1. Write student data\n\n");
        printf("2. Read student data\n\n");
        printf("3. Exit\n\n");
        scanf("%d", &answer);
        switch (answer) {
            case 1:
                if (f = fopen("students.txt", "w" != 0)) {
                    printf("Students Count: ");
                    scanf("%d", &studentsCount);
                    printf("Subjects Count: ");
                    scanf("%d", &subjectsCount);
                    for (int i = 1; i <= studentsCount; i++) {
                        printf("Enter student number: ");
                        scanf("%d", &s.num);
                        printf("Enter student name: ");
                        scanf("%s", s.name);
                        s.avrage = 0;
                        for (int k = 0; k < subjectsCount; k++) {
                            scanf("%d", &s.marks[k]);
                            s.avrage += s.marks[k];
                        }
                        s.avrage /= subjectsCount;
                    fclose(f);
                } 
                else {
                    printf("Error opening file for writing.\n");
                }
                break;
            case 2:
                // Display students code in table style
                if (f = fopen("students.txt", "r")) {
                    char line[100];
                    printf("Student Data:\n");
                    printf("--------------------------------------------------\n");
                    while (fgets(line, sizeof(line), f)) {
                        printf("%s", line);
                    }
                    printf("--------------------------------------------------\n");
                    fclose(f);
                } else {
                    printf("Error opening file for reading.\n");
                }
                break;
            case 3:
                break;
            default:
                printf("Invalid option\n");
        }
    }
    return 0;
}