#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *fp;
    char filename[] = "sample.txt";
    int ch;
    int words = 0, vowels = 0, digits = 0;
    int inWord = 0;   // flag to detect start of a new word
    /* STEP 1: CREATE/WRITE A FILE */
    fp = fopen(filename, "w");
    if (fp == NULL) {
        printf("Error creating file.\n");
        return 1;
    }
    // You can change this content as you like
    fprintf(fp, "Hello C language 123.\nThis is a test file 456.");
    fclose(fp);
    printf("File '%s' created and written successfully.\n", filename);
    /* STEP 2: OPEN FILE AGAIN FOR READING AND ANALYSIS */
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }
    while ((ch = fgetc(fp)) != EOF) {
        // count vowels
        if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
            ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') {
            vowels++;
        }
        // count digits
        if (ch >= '0' && ch <= '9') {
            digits++;
        }
   // word counting logic: word = sequence of letters/digits
        if (isalnum(ch)) {
            if (inWord == 0) {
                words++;
                inWord = 1;
            }
        } else {
            inWord = 0;
        }
    }
    fclose(fp);
    printf("\nAnalysis of file: %s\n", filename);
    printf("Total words  : %d\n", words);
    printf("Total vowels : %d\n", vowels);
    printf("Total digits : %d\n", digits);
    return 0;
}
