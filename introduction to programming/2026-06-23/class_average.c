/* Текстов файл: на всеки ред "Име оценка", оценката е цяло число 2..6.
   Извежда средния успех на класа и имената на отличниците (оценка 6). */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

#define MAX 100
#define NAMELEN 30

int main() {
    FILE *f;
    char filename[80];
    char *p;
    char name[NAMELEN];
    int grade;
    int sum = 0;
    int count = 0;
    char excellent[MAX][NAMELEN];
    int nexc = 0;
    int i;

    fputs("File name: ", stdout);
    fgets(filename, 80, stdin);
    if (p = strchr(filename, '\n')) *p = '\0';

    if (f = fopen(filename, "r")) {
        while (fscanf(f, "%s %d", name, &grade) == 2) {
            sum += grade;
            count++;
            if (grade == 6) {
                strcpy(excellent[nexc], name);
                nexc++;
            }
        }
        fclose(f);

        if (count) {
            fprintf(stdout, "Class average: %.2f\n", (float)sum / count);
            if (nexc) {
                fputs("Excellent students:\n", stdout);
                for (i = 0; i < nexc; i++) {
                    fputs(excellent[i], stdout);
                    fputs("\n", stdout);
                }
            } else {
                fputs("No excellent students.\n", stdout);
            }
        } else {
            fputs("The file is empty.\n", stdout);
        }
    } else {
        fputs("Error opening the file!\n", stdout);
    }

    fputs("Press a key to continue", stdout);
    getch();
    return 0;
}