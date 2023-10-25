#include <stdio.h>
int main() {
    FILE *file;
    char filename[50];
    int charCount = 0;
    char ch;
    printf("Enter the name of the file: ");
    scanf("%s", filename);
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }
    while ((ch = fgetc(file)) != EOF) {
        charCount++;
    }
    fclose(file);
    printf("Number of characters in the file '%s': %d\n", filename, charCount);
    return 0;
}

