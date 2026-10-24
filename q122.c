#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 256

int main() {
    FILE *file;
    char buffer[BUFFER_SIZE];

    // Open the existing file in read mode
    file = fopen("info.txt", "r");

    // Check if the file exists and opened successfully
    if (file == NULL) {
        printf("Error: Could not open file info.txt\n");
        return 1;
    }

    // Read and print lines until fgets encounters EOF (returns NULL)
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }

    // Close the file
    fclose(file);

    return 0;
}