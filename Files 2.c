#include <stdio.h>
int main() {
    FILE *file;
    char filename[50];
    char line[100];
    printf("Enter the name of the file to read: ");
    scanf("%s", filename);
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }
    printf("Contents of the file '%s':\n", filename);
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }
    fclose(file);
    return 0;
}
