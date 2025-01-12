#include <stdio.h>
void main() {
    FILE *file; 
    file = fopen("example.txt", "w");
    if (file == NULL) { 
        printf("Error opening file!\n"); 
    }
    fprintf(file, "Hello\n");
    fprintf(file, "HI\n");
    fclose(file);
    printf("File created and data written successfully.\n");
}
