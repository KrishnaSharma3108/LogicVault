#include <stdio.h>
#include <stdlib.h>
struct bank {
    int accno;
    char name[50];
    float balance;
};
int main() {
    struct bank b, b_read;
    FILE *fp;
    fp = fopen("bankdata.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }
    printf("Enter account number: ");
    scanf("%d", &b.accno);
    printf("Enter name: ");
    scanf("%s", b.name);
    printf("Enter balance: ");
    scanf("%f", &b.balance);
    fprintf(fp, "%d %s %.2f\n", b.accno, b.name, b.balance);
    fclose(fp);
    fp = fopen("bankdata.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }
    fscanf(fp, "%d %s %f", &b_read.accno, b_read.name, &b_read.balance);
    fclose(fp);
    printf("\nData read from file:\n");
    printf("Account Number: %d\n", b_read.accno);
    printf("Name: %s\n", b_read.name);
    printf("Balance: %.2f\n", b_read.balance);
    return 0;
}
