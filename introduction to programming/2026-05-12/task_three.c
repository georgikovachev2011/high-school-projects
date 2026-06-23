#include <stdio.h>

int main() {
    char str[] = "Te12st 34St5ring89";
    int i, j = 0;

    for (i = 0; str[i] != '\0'; i++) {
        // Ръчна проверка дали символът НЕ е цифра
        if (!(str[i] >= '0' && str[i] <= '9')) {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0'; // Затваряме низа

    printf("Bez cifri: %s\n", str);
    return 0;
}