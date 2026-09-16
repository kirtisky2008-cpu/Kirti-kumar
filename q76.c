#include <stdio.h>

int main() {
    int n;
    int isSymmetric = 1;

    scanf("%d", &n);

    int matrix[n][n];

    // Read matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check symmetry
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }

        if (!isSymmetric) {
            break;
        }
    }

    if (isSymmetric)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}