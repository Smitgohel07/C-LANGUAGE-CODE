#include <stdio.h>
#include <string.h>
struct Student {
    int rollNumber;
    char name[50];
    int backlogs;
};

void main() {
    FILE *file;
    struct Student student;

    file = fopen("student.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing!");
    }

    printf("Enter details of 3 students (Roll Number, Name, Backlogs):\n");
    for (int i = 0; i < 3; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &student.rollNumber);
        getchar();  
        printf("Name: ");
        gets(student.name);
        printf("Backlogs: ");
        scanf("%d", &student.backlogs);
        fprintf(file, "%d %s %d\n", student.rollNumber, student.name, student.backlogs);  // Writing to file

    }
    fclose(file); 

    file = fopen("student.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading!\n");
    }
    printf("\nStudents with more than 5 backlogs:\n");
    while (fscanf(file, "%d %s %d\n", &student.rollNumber,&student.name,&student.backlogs) != EOF) {
        if (student.backlogs > 5) {
            printf("Roll Number: %d\n", student.rollNumber);
        }
    }
    fclose(file); 
}
