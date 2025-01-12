#include <stdio.h>

void main() {
    float sub1, sub2, sub3, sub4, sub5, percentage;
    int failed_subjects = 0; 
    printf("Enter marks for subject 1 (out of 100): ");
    scanf("%f", &sub1);
    printf("Enter marks for subject 2 (out of 100): ");
    scanf("%f", &sub2);
    printf("Enter marks for subject 3 (out of 100): ");
    scanf("%f", &sub3);
    printf("Enter marks for subject 4 (out of 100): ");
    scanf("%f", &sub4);
    printf("Enter marks for subject 5 (out of 100): ");
    scanf("%f", &sub5);

    if (sub1 < 35) failed_subjects++;
    if (sub2 < 35) failed_subjects++;
    if (sub3 < 35) failed_subjects++;
    if (sub4 < 35) failed_subjects++;
    if (sub5 < 35) failed_subjects++;

    percentage = ((sub1 + sub2 + sub3 + sub4 + sub5) / 500) * 100;

    if (failed_subjects > 0) {
        printf("Number of failed subjects: %d\n", failed_subjects);
        printf("Result: Fail\n");
    } else {
        printf("Percentage: %.2f%%\n", percentage);
        if (percentage < 35) {
            printf("Result: Fail\n");
        } else if (percentage <= 45) {
            printf("Result: Pass Class\n");
        } else if (percentage <= 60) {
            printf("Result: Second Class\n");
        } else if (percentage <= 70) {
            printf("Result: First Class\n");
        } else if (percentage <= 100) {
            printf("Result: Distinction\n");
        } else {
            printf("Invalid marks! Check the inputs.\n");
        }
    }
}
