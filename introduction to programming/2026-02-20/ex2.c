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

    for(int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
            ok = 0;
        }

        arr[j + 1] = key;
    }

    printf("Sorted array:\n");

    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n%d", ok);

    return 0;
}