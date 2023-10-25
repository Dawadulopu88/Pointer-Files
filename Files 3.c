#include <stdio.h>
int main() {
    FILE *file;
    char filename[50];
    int lineCount = 0;
    char ch;
    printf("Enter the name of the file: ");
    scanf("%s", filename);
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }
    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\n') {
            lineCount++;
        }
    }
    if (ch != '\n' && lineCount > 0) {
        lineCount++;
    }
    fclose(file);
    printf("Number of lines in the file '%s': %d\n", filename, lineCount);
    return 0;
}
