#include <stdio.h>
int main() {
    FILE *sourceFile, *destinationFile;
    char sourceFilename[50], destinationFilename[50];
    char ch;
    printf("Enter the name of the source file: ");
    scanf("%s", sourceFilename);
    sourceFile = fopen(sourceFilename, "r");
    if (sourceFile == NULL) {
        printf("Error opening the source file.\n");
        return 1;
    }
    printf("Enter the name of the destination file: ");
    scanf("%s", destinationFilename);
    destinationFile = fopen(destinationFilename, "w");
    if (destinationFile == NULL) {
        printf("Error opening the destination file.\n");
        fclose(sourceFile);
        return 1;
    }
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }
    fclose(sourceFile);
    fclose(destinationFile);
    printf("File copied successfully from '%s' to '%s'.\n", sourceFilename, destinationFilename);
    return 0;
}
