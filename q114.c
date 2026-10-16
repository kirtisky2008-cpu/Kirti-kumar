#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    scanf("%999s", s);

    int n = strlen(s);
    int maxLength = 0;

    for (int i = 0; i < n; i++) {
        int visited[256] = {0};
        int length = 0;

        for (int j = i; j < n; j++) {
            if (visited[(unsigned char)s[j]]) {
                break;
            }

            visited[(unsigned char)s[j]] = 1;
            length++;
        }

        if (length > maxLength) {
            maxLength = length;
        }
    }

    printf("%d\n", maxLength);

    return 0;
}