#include <stdio.h>

int main() {
    int n, i, sum = 0, missing;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    missing = n * (n + 1) / 2 - sum;

    printf("Missing number: %d\n", missing);

    return 0;
}