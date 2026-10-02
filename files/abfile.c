#include <stdio.h>
#include <stdlib.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    FILE *fp;
    struct Student s1 = {1, "KRISHNA", 95.5f};
    struct Student temp;

    /* write records in binary file */
    fp = fopen("students.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    fwrite(&s1, sizeof(s1), 1, fp);

    fclose(fp);

    /* read records from binary file */
    fp = fopen("students.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    printf("Roll\tName\tMarks\n");
    while (fread(&temp, sizeof(s1), 1, fp) == 1) {
        printf("%d\t%s\t%.2f\n", temp.roll, temp.name, temp.marks);
    }

    fclose(fp);
    return 0;
}


