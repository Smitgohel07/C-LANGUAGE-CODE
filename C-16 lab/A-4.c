#include <stdio.h>
void main() {
    int i,j,rows,columns;
    printf("Enter the number of rows and columns for the matrices: ");
    scanf("%d %d",&rows,&columns);

    int a[rows][columns],b[rows][columns],sum[rows][columns];
    printf("Enter elements for matrix A:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            printf("Enter element a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter elements for matrix B:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            printf("Enter element b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    printf("The sum of matrix A and matrix B is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}
