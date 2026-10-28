#include <stdio.h>
#include <stdlib.h>

int main() {
    char filename[100];
    FILE *fp;
    char ch;

    // Prompt the user for the filename
    printf("Filename: ");
    if (scanf("%99s", filename) != 1) {
        printf("Error reading filename.\n");
        return 1;
    }

    // Try to open the file in read mode
    fp = fopen(filename, "r");

    // Check if the file pointer is NULL
    if (fp == NULL) {
        printf("Error: File does not exist!\n");
        return 1;
    }

    printf("File opened successfully.\n");

    // Read and print character-by-character until EOF
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    // Close the file
    fclose(fp);

    return 0;
}