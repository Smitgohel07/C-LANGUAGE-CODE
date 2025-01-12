#include <stdio.h>

void main() {
    FILE *sourceFile, *destinationFile;
    char ch;
    sourceFile = fopen("source.txt", "r");
    if (sourceFile == NULL) {
        printf("Error opening source file!\n");
    }
    destinationFile = fopen("destination.txt", "a");
    if (destinationFile == NULL) {
        printf("Error opening destination file!\n");
        fclose(sourceFile);
    }

    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);  
    }

    fclose(sourceFile);
    fclose(destinationFile);

    printf("File content appended successfully.\n");
}
