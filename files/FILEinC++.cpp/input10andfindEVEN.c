#include <stdio.h>

int main() {
    FILE *fp;
    int i, num;

    /* Step 1: Open file to write numbers */
    fp = fopen("numbers.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &num);
        fprintf(fp, "%d ", num);   // write numbers to file
    }
    fclose(fp);

    /* Step 2: Open file to read and print even numbers */
    fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    printf("\nEven numbers in file are:\n");
    while (fscanf(fp, "%d", &num) == 1) {
        if (num % 2 == 0) {
            printf("%d ", num);
        }
    }

    fclose(fp);
    return 0;
}
