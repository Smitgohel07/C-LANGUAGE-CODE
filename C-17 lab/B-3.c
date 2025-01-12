#include <stdio.h>
void main(){
    int row, column, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &column);

    int a[row][column], b[row][column], sum[row][column];
    printf("Enter elements of the first matrix:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < column; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", (*(a + i) + j)); 
        }
    }

    printf("Enter elements of the second matrix:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < column; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", (*(b + i) + j)); 
        }
    }

    for (i = 0; i < row; i++) {
        for (j = 0; j < column; j++) {
            *(*(sum + i) + j) = *(*(a + i) + j) + *(*(b + i) + j); 
        }
    }

    printf("The resultant matrix is:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < column; j++) {
            printf("%d ", *(*(sum + i) + j));
        }
        printf("\n");
    }
}