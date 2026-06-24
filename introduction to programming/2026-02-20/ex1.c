#include <stdio.h>

int main() {
    int arr[100];
    int n;
    int ok = 1;

    do {
        printf("Enter the amount of elements (arr[100]): ");
        scanf("%d", &n);
    } while (n < 1 || n > 100);

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        if(minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
            ok = 0;
        }
    }

    printf("Sorted array:\n");

    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n%d", ok);

    return 0;
}