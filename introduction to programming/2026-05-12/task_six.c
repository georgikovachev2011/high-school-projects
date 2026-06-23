#include <stdio.h>

int main() {
    char str[] = "( ( ) ) ( ) ( ( ) )";
    int stack[100];
    int pairs[100][2];
    int top = -1, pair_count = 0, paren_num = 0, i, j;
    int balanced = 1, temp0, temp1;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '(') {
            paren_num++;
            top++;
            stack[top] = paren_num;
        } else if (str[i] == ')') {
            paren_num++;
            if (top == -1) {
                balanced = 0; break;
            }
            pairs[pair_count][0] = stack[top];
            top--;
            pairs[pair_count][1] = paren_num;
            pair_count++;
        }
    }

    if (top != -1) balanced = 0; 

    if (balanced == 0) {
        printf("Ne sa pravilno balansirani.\n");
    } else {
        printf("Pravilno balansirani.\n");
        // Ръчно сортиране (Bubble sort)
        for (i = 0; i < pair_count - 1; i++) {
            for (j = 0; j < pair_count - i - 1; j++) {
                if (pairs[j][0] > pairs[j+1][0]) {
                    temp0 = pairs[j][0];
                    temp1 = pairs[j][1];
                    pairs[j][0] = pairs[j+1][0];
                    pairs[j][1] = pairs[j+1][1];
                    pairs[j+1][0] = temp0;
                    pairs[j+1][1] = temp1;
                }
            }
        }
        for (i = 0; i < pair_count; i++) {
            printf("%d %d\n", pairs[i][0], pairs[i][1]);
        }
    }
    return 0;
}