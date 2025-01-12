#include <stdio.h>

int main() {
    FILE *file;
    char ch;
    int num;
    char str[100];

    file = fopen("example.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    fprintf(file, "This is a number: %d\n", 123);
    fprintf(file, "This is a string: %s\n", "Hello, World!");

    fputc('A', file);
    fputc('\n', file);  
    fclose(file);

    file = fopen("example.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    fscanf(file, "This is a number: %d\n", &num);
    fscanf(file, "This is a string: %s\n", str);

    printf("Read from file:\n");
    printf("Number: %d\n", num);
    printf("String: %s\n", str);

    ch = fgetc(file);
    printf("First character read using fgetc(): %c\n", ch);

    fseek(file, 0, SEEK_SET);

    ch = fgetc(file);
    printf("First character after fseek() to the beginning: %c\n", ch);
    rewind(file);

    ch = fgetc(file);
    printf("First character after rewind(): %c\n", ch);

    fclose(file);
    return 0;
}
