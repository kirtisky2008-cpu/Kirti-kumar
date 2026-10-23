#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char name[100];
    int age;

    // Open info.txt in write mode ("w")
    fp = fopen("info.txt", "w");
    if (fp == NULL) {
        printf("Error: Could not open/create file.\n");
        return 1;
    }

    // Read user inputs
    printf("Enter name: ");
    scanf(" %[^\n]", name);

    printf("Enter age: ");
    scanf("%d", &age);

    // Write formatted data into the file
    fprintf(fp, "Name: %s\nAge: %d\n", name, age);

    // Close the file stream
    fclose(fp);

    // Confirmation message
    printf("File created successfully! Data written to info.txt\n");

    return 0;
}