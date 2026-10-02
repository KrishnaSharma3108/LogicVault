#include <stdio.h>

struct Student {
    int roll;
    char name[20];
    float marks;
};

int main() {
    struct Student s[3] = {
        {1, "Ram", 85.5},
        {2, "Sita", 90.0},
        {3, "Mohan", 78.25}
    };

    /* pointer to array of structure */
    struct Student *ptr;

    /* make ptr point to first element of array */
    ptr = s;      // same as &s[0]

    printf("Details using pointer:\n\n");

    for (int i = 0; i < 3; i++) {
        printf("Student %d\n", i + 1);
        printf("Roll  : %d\n", (ptr + i)->roll);
        printf("Name  : %s\n", (ptr + i)->name);
        printf("Marks : %.2f\n\n", (ptr + i)->marks);
    }

    return 0;
}
