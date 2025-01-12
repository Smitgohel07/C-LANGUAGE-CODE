#include <stdio.h>
void main() {
    int students[20][2];  
    int i;
    for(i = 0; i < 20; i++) {
        printf("Enter Roll Number for Student %d: ", i + 1);
        scanf("%d", &students[i][0]); 

        printf("Enter Marks for Student %d: ", i + 1);
        scanf("%d", &students[i][1]);  
    }
    printf("Roll No   Marks\n");
    for(i = 0; i < 20; i++) {
        printf("%d   %d\n", students[i][0], students[i][1]);
    }
}
