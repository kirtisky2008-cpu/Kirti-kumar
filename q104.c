#include <stdio.h>

int main() {
    int n, x;
    int total, left, right;

    scanf("%d", &n);

    total = n * (n + 1) / 2;

    for (x = 1; x <= n; x++) {
        left = x * (x + 1) / 2;
        right = total - (x - 1) * x / 2;

        if (left == right) {
            printf("%d", x);
            return 0;
        }
    }

    printf("-1");

    return 0;
}