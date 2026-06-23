#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

typedef struct {
    int num;
    char name[20];
    int marks[20];
    float avr;
} TStudent;

int main() {
    int op, k;
    FILE *f;
    TStudent s;
    char filename[80];
    char *p;

    printf("File Name: ");
    fgets(filename, 80, stdin);
    if ((p = strchr(filename, '\n'))) *p = '\0'; 

    while (1) {
        system("cls");
        printf("1. Change file\n");
        printf("2. Write\n");
        printf("3. Read\n");
        printf("4. Add\n");
        printf("5. Exit\n");
        printf("Select option: ");
        scanf("%d", &op);
        getchar();
        switch (op) {
            case 1:  
                printf("File Name: ");
                fgets(filename, 80, stdin);
                if ((p = strchr(filename, '\n'))) *p = '\0';
                break;
            case 2:
                if ((f = fopen(filename, "w"))) {
                    while (1) {
                        printf("num (-1 for end) = ");
                        scanf("%d", &s.num);
                        if (s.num == -1) break;
                        getchar(); 
                        printf("name = ");
                        fgets(s.name, 20, stdin);
                        if ((p = strchr(s.name, '\n'))) *p = '\0';
                        s.avr = 0;
                        k = 0;
                        for (int m = 0; m < 20; m++) s.marks[m] = -1;
                        while (k < 20) {
                            printf("Mark %d for student ID %d (-1 for end) = ", k + 1, s.num);
                            scanf("%d", &s.marks[k]);
                            if (s.marks[k] == -1) break;
                            s.avr += s.marks[k];
                            k++;
                        }
                        if (k > 0) s.avr /= k;
                        fwrite(&s, sizeof(s), 1, f);
                    }
                    fclose(f);
                } else {
                    printf("Error opening file for writing!\n");
                }
                break;
            case 3:
                if ((f = fopen(filename, "r"))) {
                    while (fread(&s, sizeof(s), 1, f) == 1) {
                        printf("%3d %21s", s.num, s.name);
                        k = 0;
                        while (k < 20) {
                            if (s.marks[k] == -1) break;
                            printf("%4d", s.marks[k]);
                            k++;
                        }
                        printf(" | Avg: %6.2f\n", s.avr);
                    }
                    fclose(f);
                } else {
                    printf("Error opening file for reading!\n");
                }
                break;
            case 4:
                if ((f = fopen(filename, "a"))) {
                    while (1) {
                        printf("num (-1 for end) = ");
                        scanf("%d", &s.num);
                        if (s.num == -1) break;
                        getchar(); // Clear buffer
                        printf("name = ");
                        fgets(s.name, 20, stdin);
                        if ((p = strchr(s.name, '\n'))) *p = '\0';
                        s.avr = 0;
                        k = 0;
                        for (int m = 0; m < 20; m++) s.marks[m] = -1;
                        while (k < 20) {
                            printf("Mark %d for student ID %d (-1 for end) = ", k + 1, s.num);
                            scanf("%d", &s.marks[k]);
                            if (s.marks[k] == -1) break;
                            s.avr += s.marks[k];
                            k++;
                        }
                        if (k > 0) s.avr /= k;
                        fwrite(&s, sizeof(s), 1, f);
                    }
                    fclose(f);
                } else {
                    printf("Error opening file for appending!\n");
                }
                break;
                
            case 5:
                return 0;
                
            default:
                printf("Incorrect choice!\n");
        }
        printf("Press any key to continue...");
        getch();
    }
    return 0;
}