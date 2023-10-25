#include <stdio.h>
int main() {
    FILE *file;
    char filename[50];
    char information[100];
    printf("Enter the name of the file: ");
    scanf("%s", filename);
    file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }
    printf("Enter information to store in the file (max 100 characters):\n");
    getchar();
    fgets(information, sizeof(information), stdin);
    fprintf(file, "%s", information);
    fclose(file);
    printf("Information has been written to the file successfully.\n");
    return 0;
}

