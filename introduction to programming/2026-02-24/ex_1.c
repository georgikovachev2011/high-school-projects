#include <stdio.h>
#define max_size 100

int main() {
    int a[max_size];
    int n;
    int i, k, x;

    do {
        printf("Enter the number of elements (max %d): ", max_size);
        scanf("%d", &n);
    } while(n > max_size || n <= 0);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for(i = 1; i < n; i++) {
        int temp = a[i];
        k = i - 1;

        while(k >= 0 && a[k] > temp) {
            a[k+1] = a[k];
            k--;
        }

        a[k+1] = temp;
    }

    printf("Enter element to search: ");
    scanf("%d", &x);

    int left = 0, right = n - 1, mid;

    while(left <= right) {
        mid = (left + right) / 2;

        if(a[mid] == x) {
            printf("Element found\n");
            return 0;
        }
        else if(a[mid] < x) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    printf("Element not found\n");

    return 0;
}