//Write a program that checks whether a sequence of characters ending with Enter 
//(newline) can be converted to an integer (the integer can start
// with a + or - sign or be unsigned, followed by a sequence of digits.



#include <stdio.h>
#include <stdlib.h>

int main() {
    char ch;
    int true = 1;

    printf("Enter a sequence of characters: ");

    ch = getchar();  

    if (!(ch == '+' || ch == '-') || (ch >= '0' && ch <= '9')) {
        true = 0;
    }
    

    while ((ch = getchar()) != '\n' && true) {
        if (ch < '0' || ch > '9') {
            true = 0;
        }
    }

    if (true == 1)
        printf("It can be converted to an integer.\n");
    else
        printf("It cannot be converted to an integer.\n");

    return EXIT_SUCCESS;
}


