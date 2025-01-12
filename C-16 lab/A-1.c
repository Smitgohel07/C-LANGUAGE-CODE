#include <stdio.h>
void main() {
    int row, column, i, j;
    printf("Enter the number of rows: ");
    scanf("%d",&row);
    printf("Enter the number of columns: ");
    scanf("%d",&column);
    int a[row][column];
    
    for(i = 0; i < row; i++) {
        for(j = 0; j < column; j++) {
            printf("Enter element a[%d][%d] = ", i, j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("Matrix:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < column; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
