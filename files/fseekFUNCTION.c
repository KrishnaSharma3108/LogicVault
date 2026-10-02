#include <stdio.h>

int main() {
    FILE *file;
    char buffer[20];

    // Open file in read mode
    file = fopen("krishna", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Move file pointer to the 5th byte from the beginning
    fseek(file, 5, SEEK_SET);

    // Read and display the next 10 characters
    fread(buffer, sizeof(char), 10, file);
    buffer[10] = '\0'; // Null-terminate the string
    printf("Data read: %s\n", buffer);

    // Close the file
    fclose(file);

    return 0;
}
