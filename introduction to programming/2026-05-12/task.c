#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int num;
    char name[50];
    int marks[20];
    float average;
} TStudent;

int main() {
    TStudent s[30];
    int countU, countP, i, j;
    
    do {
        printf("Count of students: ");
        scanf("%d", &countU);
    } while (countU <= 0 || countU > 30);
    
    do {
        printf("Count of subjects: ");
        scanf("%d", &countP);
    } while (countP <= 0 || countP > 20);

    for (i = 0; i < countU; i++) {
        printf("Student %d number: ", i + 1);
        scanf("%d", &s[i].num);
        
        printf("Student %d name: ", i + 1);

        scanf(" %[^\n]", s[i].name); 
        
        for (j = 0; j < countP; j++) {
            printf("Student %d mark for subject %d: ", i + 1, j + 1);
            scanf("%d", &s[i].marks[j]);
        }
        
        int sum = 0;
        for (j = 0; j < countP; j++) {
            sum += s[i].marks[j];
        }
        s[i].average = (float)sum / countP;
    }

    for (i = 0; i < countU - 1; i++) {
        for (j = 0; j < countU - i - 1; j++) {
            if (s[j].num > s[j + 1].num) {
                TStudent temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }

    printf("\n%-10s %-20s", "Number", "Name");
    for (i = 0; i < countP; i++) {
        char subj_name[15];
        sprintf(subj_name, "Subj%d", i + 1);
        printf("%-10s", subj_name); 
    }
    printf("Average\n");

    for (i = 0; i < countU; i++) {
        printf("%-10d %-20s", s[i].num, s[i].name);
        for (j = 0; j < countP; j++) {
            printf("%-10d", s[i].marks[j]); 
        }
        printf("%.2f\n", s[i].average);
    }

    return EXIT_SUCCESS;
}