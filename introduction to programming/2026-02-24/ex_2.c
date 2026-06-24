#include <stdio.h>

int main() {
    int arr[100];
    int size;
    int target;
    int i;
    int found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    printf("Enter %d numbers:\n", size);
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to search: ");
    scanf("%d", &target);

    for(i = 0; i < size; i++) {
        if(arr[i] == target) {
            printf("Number found");
            found = 1;
            break;
        }
    }

    if(found == 0) {
        printf("Number not found\n");
    }

    return 0;
}