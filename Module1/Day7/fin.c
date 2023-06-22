#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    FILE *fin, *fout;
    fin = fopen("read.txt", "r");
    fout = fopen("write.txt", "w");

    if (NULL == fin) {
        printf("Source file does not exist!\n");
        return 1;
    }

    if (fin == NULL || fout == NULL) {
        printf("Failed to open files.\n");
        return 1;
    }

    char ch;
    int option = 0; // Default: No case conversion

    char conversionOption;
    printf("Enter the conversion option (u/l/s): ");
    scanf(" %c", &conversionOption);


    // Check for user option
    if (conversionOption) {
        switch (conversionOption) {
            case 'u':
                option = 1; // Convert to Upper Case
                break;
            case 'l':
                option = 2; // Convert to Lower Case
                break;
            case 's':
                option = 3; // Convert to Purely Upper Case
                break;
            default:
                printf("Invalid option.\n");
                return 1;
        }
    }

    while ((ch = fgetc(fin)) != EOF) {
        if (option == 1) { // Convert to Upper Case
            ch = toupper(ch);
        } else if (option == 2) { // Convert to Lower Case
            ch = tolower(ch);
        } else if (option == 3) { // Convert to Purely Upper Case
            if (isalpha(ch)) {
                ch = toupper(ch);
            }
        }
        fputc(ch, fout);
    }

    fclose(fin);
    fclose(fout);

    printf("File copied successfully.\n");

    return 0;
}
