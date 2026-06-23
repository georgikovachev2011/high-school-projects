#include <stdio.h>

char* search_replace(char *s1, char *s2, char *s3) {
    static char result[1024]; // Статичен масив вместо malloc
    int i = 0, j, k = 0, m, match;

    while (s1[i] != '\0') {
        match = 1;
        for (j = 0; s2[j] != '\0'; j++) {
            if (s1[i + j] != s2[j]) {
                match = 0;
                break;
            }
        }

        if (match == 1 && s2[0] != '\0') {
            // Ако имаме съвпадение, добавяме s3 в резултата
            for (m = 0; s3[m] != '\0'; m++) {
                result[k++] = s3[m];
            }
            i += j; // Прескачаме старата дума
        } else {
            // Иначе просто копираме текущия символ
            result[k++] = s1[i++];
        }
    }
    result[k] = '\0';
    return result;
}

int main() {
    char s1[] = "I like apples";
    printf("Rezultat: %s\n", search_replace(s1, "apples", "oranges"));
    return 0;
}