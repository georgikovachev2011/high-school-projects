#include <stdio.h>

int main() {
    char str[50];
    int num = 0, i = 0, is_negative = 0, valid = 1;

    printf("Vuvedete niz: ");
    scanf("%s", str);

    // Проверка за отрицателно число
    if (str[0] == '-') {
        is_negative = 1;
        i = 1;
    }

    for (; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            num = num * 10 + (str[i] - '0');
        } else {
            valid = 0; // Намерихме символ, който не е цифра
            break;
        }
    }

    if (valid == 1 && str[0] != '\0') {
        if (is_negative) num = -num;
        printf("Uspeshno! Chislo: %d\n", num);
    } else {
        printf("Greshka: Tova ne e samo cqlo chislo.\n");
    }

    return 0;
}