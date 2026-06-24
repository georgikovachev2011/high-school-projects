#include <stdio.h>

int main() {
    int arr[100];
    int size;
    int target;
    int i;
    int found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &size);

    printf("Enter %d sorted numbers:\n", size);
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &target);

    for(i = 0; i < size; i++) {
        if(arr[i] == target) {
            printf("Found at index %d\n", i);
            found = 1;
            break;
        }

        if(arr[i] > target) {
            break;
        }
    }

    if(found == 0) {
        printf("Number not found\n");
    }

    return 0;
}                                                                       