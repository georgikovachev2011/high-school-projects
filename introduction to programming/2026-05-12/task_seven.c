#include <stdio.h>

// Ръчна функция за сравняване на низове
int my_strcmp(char *s1, char *s2) {
    int i = 0;
    while (s1[i] == s2[i] && s1[i] != '\0') {
        i++;
    }
    return s1[i] - s2[i];
}

// Ръчна функция за копиране на низове
void my_strcpy(char *dest, char *src) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

int main() {
    int n, i, j;
    char names[50][100];
    char temp[100];

    printf("Kolko uchenika: ");
    scanf("%d", &n);

    printf("Vuvedete imenata:\n");
    for (i = 0; i < n; i++) {
        scanf("%s", names[i]);
    }

    // Сортиране (Bubble Sort)
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (my_strcmp(names[j], names[j+1]) > 0) {
                my_strcpy(temp, names[j]);
                my_strcpy(names[j], names[j+1]);
                my_strcpy(names[j+1], temp);
            }
        }
    }

    printf("\nSortirani:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}