#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    scanf(" %[^\n]", str);

    int start = 0, i;

    for (i = 0; ; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            int j;
            for (j = i - 1; j >= start; j--)
                printf("%c", str[j]);

            if (str[i] == ' ')
                printf(" ");
            else
                break;

            start = i + 1;
        }
    }

    return 0;
}