#include <stdio.h>

int main() {
    int n, i, x, pos;

    scanf("%d", &n);

    int arr[100];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &x);

    // Find the correct position
    pos = 0;
    while (pos < n && arr[pos] < x) {
        pos++;
    }

    // Shift elements to the right
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the element
    arr[pos] = x;
    n++;

    // Print the sorted array
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
