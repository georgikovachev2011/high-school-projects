#include <stdio.h>

void inputArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void mergeArrays(int arr1[], int size1, int arr2[], int size2, int merged[]) {
    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    while (i < size1) {
        merged[k++] = arr1[i++];
    }

    while (j < size2) {
        merged[k++] = arr2[j++];
    }
}

int main() {
    int size1, size2;

    printf("Enter size of first array: ");
    scanf("%d", &size1);

    if (size1 <= 0) {
        printf("Invalid size.\n");
        return 1;
    }

    int arr1[size1];
    inputArray(arr1, size1);
    sortArray(arr1, size1);

    printf("Enter size of second array: ");
    scanf("%d", &size2);

    if (size2 <= 0) {
        printf("Invalid size.\n");
        return 1;
    }

    int arr2[size2];
    inputArray(arr2, size2);
    sortArray(arr2, size2);

    int merged[size1 + size2];
    mergeArrays(arr1, size1, arr2, size2, merged);

    printf("Merged sorted array: ");
    printArray(merged, size1 + size2);

    return 0;
}