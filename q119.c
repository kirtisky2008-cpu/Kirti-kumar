#include <stdio.h>
#include <stdbool.h>

#define MAX_VAL 100000

int findDuplicate(int arr[], int n) {
    // Array to track visited elements
    static bool visited[MAX_VAL] = {false};

    for (int i = 0; i < n; i++) {
        // Handle positive indices or adjust offset if negative numbers exist
        if (visited[arr[i]]) {
            return arr[i]; // Found in single iteration
        }
        visited[arr[i]] = true;
    }

    return -1; // No duplicate found
}

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int duplicate = findDuplicate(arr, n);
    if (duplicate != -1) {
        printf("%d\n", duplicate);
    } else {
        printf("No repeated element found\n");
    }

    return 0;
}