// Write a program that enters a sequence of characters ending with Enter 
//(new line) and checks whether this sequence consists only of digits.



#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main() {
    char ch;
    int true = 1;

    printf("Enter a sequence of characters: ");

    ch = getchar();                

    while (ch != '\n') {            
        if (ch < '0' || ch > '9') { 
            true = 0;
            break;
        }
        ch = getchar();             
    }

    if (true)
        printf("The sequence contains only digits.\n");
    else
        printf("The sequence does NOT contain only digits.\n");

    return EXIT_SUCCESS;
}