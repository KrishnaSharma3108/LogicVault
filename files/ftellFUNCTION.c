#include <stdio.h>

int main() {
    FILE *file;
    long position;

    // Open a file in read mode
    file = fopen("krishna", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Read the first character
    char ch = fgetc(file);
    ch= fgetc(file);
    printf("First character: %c\n", ch);

    // Get the current position of the file pointer
    position = ftell(file);
    printf("Current file pointer position: %ld\n", position);

    // Close the file
    fclose(file);

    return 0;
}
