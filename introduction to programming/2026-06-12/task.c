#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
 
#define MAX_STUDENTS 30
#define MAX_SUBJECTS 20
 
typedef struct {
    int id;
    char name[20];
    int grades[20];
    float average;
} TStudent;
 
void write_file(char *filename);
void read_file(char *filename);
void append_file(char *filename);
void edit_file(char *filename);
void delete_file(char *filename);
 
int main() {
    int option;
    char filename[80];
    char *p;
 
    printf("File name: ");
    fgets(filename, 80, stdin);
    p = strchr(filename, '\n');
    if (p) *p = '\0';
 
    while (1) {
        system("cls");
        printf("1. Choose class (file)\n");
        printf("2. Write\n");
        printf("3. Read\n");
        printf("4. Add\n");
        printf("5. Edit record\n");
        printf("6. Delete record\n");
        printf("7. Exit\n");
        scanf("%d", &option);
        getchar();
 
        switch (option) {
            case 1:
                printf("File name: ");
                fgets(filename, 80, stdin);
                p = strchr(filename, '\n');
                if (p) *p = '\0';
                break;
            case 2:
                write_file(filename);
                break;
            case 3:
                read_file(filename);
                break;
            case 4:
                append_file(filename);
                break;
            case 5:
                edit_file(filename);
                break;
            case 6:
                delete_file(filename);
                break;
            case 7:
                return 0;
            default:
                printf("Incorrect choice!\n");
        }
 
        printf("Press a key to continue");
        getch();
    }
    return 0;
}
 
void write_file(char *filename) {
    FILE *f;
    TStudent s;
    char *p;
    int k;
 
    if (f = fopen(filename, "w")) {
        printf("To end type 0 as id\n");
        while (1) {
            printf("Student's id: ");
            scanf("%d", &s.id);
            if (s.id == 0) break;
            getchar();
            printf("Name: ");
            fgets(s.name, 20, stdin);
            if (p = strchr(s.name, '\n')) *p = '\0';
            s.average = 0;
            k = 0;
            while (k < MAX_SUBJECTS) {
                printf("Enter grade %d for student %d (0 to end): ", k + 1, s.id);
                scanf("%d", &s.grades[k]);
                if (s.grades[k] == 0) break;
                s.average += s.grades[k];
                k++;
            }
            if (k) s.average /= k;
            fwrite(&s, sizeof(s), 1, f);
        }
        fclose(f);
    } else printf("Error opening the file!");
}
 
void read_file(char *filename) {
    FILE *f;
    TStudent s;
    int k;
 
    if (f = fopen(filename, "r")) {
        while (fread(&s, sizeof(s), 1, f)) {
            printf("%-5d%-21s", s.id, s.name);
            k = 0;
            while (k < MAX_SUBJECTS) {
                if (s.grades[k] == 0) break;
                printf("%d ", s.grades[k]);
                k++;
            }
            printf("  %.2f\n", s.average);
        }
        fclose(f);
    } else printf("Error opening the file!");
}
 
void append_file(char *filename) {
    FILE *f;
    TStudent s;
    char *p;
    int k;
 
    if (f = fopen(filename, "a")) {
        printf("To end type 0 as id\n");
        while (1) {
            printf("Student's id: ");
            scanf("%d", &s.id);
            if (s.id == 0) break;
            getchar();
            printf("Name: ");
            fgets(s.name, 20, stdin);
            if (p = strchr(s.name, '\n')) *p = '\0';
            s.average = 0;
            k = 0;
            while (k < MAX_SUBJECTS) {
                printf("Enter grade %d for student %d (0 to end): ", k + 1, s.id);
                scanf("%d", &s.grades[k]);
                if (s.grades[k] == 0) break;
                s.average += s.grades[k];
                k++;
            }
            if (k) s.average /= k;
            fwrite(&s, sizeof(s), 1, f);
        }
        fclose(f);
    } else printf("Error opening the file!");
}
 
void edit_file(char *filename) {
    FILE *f;
    TStudent s;
    char *p;
    int k; 
    int target;
    int found = 0;
 
    if (f = fopen(filename, "r+")) {
        printf("Enter id to edit: ");
        scanf("%d", &target);
        while (fread(&s, sizeof(s), 1, f)) {
            if (s.id == target) {
                found = 1;
                getchar();
                printf("New name: ");
                fgets(s.name, 20, stdin);
                if (p = strchr(s.name, '\n')) *p = '\0';
                s.average = 0;
                k = 0;
                while (k < MAX_SUBJECTS) {
                    printf("Enter grade %d (0 to end): ", k + 1);
                    scanf("%d", &s.grades[k]);
                    if (s.grades[k] == 0) break;
                    s.average += s.grades[k];
                    k++;
                }
                if (k) s.average /= k;
                fseek(f, -(long)sizeof(s), SEEK_CUR);
                fwrite(&s, sizeof(s), 1, f);
                break;
            }
        }
        if (!found) printf("Student not found!");
        fclose(f);
    } else printf("Error opening the file!");
}
 
void delete_file(char *filename) {
    FILE *f, *tmp;
    TStudent s;
    int target;
    int found = 0;
 
    if (f = fopen(filename, "r")) {
        printf("Enter id to delete: ");
        scanf("%d", &target);
        tmp = fopen("tmp.dat", "w");
        while (fread(&s, sizeof(s), 1, f)) {
            if (s.id == target) { found = 1; continue; }
            fwrite(&s, sizeof(s), 1, tmp);
        }
        fclose(f);
        fclose(tmp);
        remove(filename);
        rename("tmp.dat", filename);
        if (!found) printf("Student not found!");
    } else printf("Error opening the file!");
}
 