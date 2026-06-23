//make me random number generator
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int randomNum = (num * 1103515245 + 12345) % 2147483648;
    
    printf("Random number generated: %d\n", randomNum);
    
    return 0;
}