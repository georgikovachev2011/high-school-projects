#include <stdio.h>

int main() {
    int count;
    int numbers[100];

    printf("Enter number of elements: ");
    scanf("%d", &count);

    for (int i = 0; i < count; i++) {
        scanf("%d", &numbers[i]);
    }

    printf("Array without duplicates: ");

    for (int i = 0; i < count; i++) {
        int duplicateFound = 0;

        for (int j = 0; j < i; j++) {
            if (numbers[i] == numbers[j]) {
                duplicateFound = 1;
                break;
            }
        }

        if (duplicateFound == 0) {
            printf("%d ", numbers[i]);
        }
    }

    return 0;
}
