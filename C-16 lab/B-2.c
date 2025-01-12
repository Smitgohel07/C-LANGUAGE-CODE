#include <stdio.h>

void main() {
    int r1, c1, r2, c2;
    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Error: The number of columns in the first matrix must equal the number of rows in the second matrix.\n");
        return; 
    }

    int a[r1][c1], b[r2][c2], c[r1][c2]; 
    int sum = 0;
    printf("Enter the elements of the first matrix (%dx%d):\n", r1, c1);
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("Element [%d][%d]: ",i,j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the elements of the second matrix (%dx%d):\n", r2, c2);
    for (int i = 0;i < r2;i++) {
        for (int j = 0;j < c2;j++) {
            printf("Element [%d][%d]: ",i,j);
            scanf("%d", &b[i][j]);
        }
    }
    for (int i = 0; i< r1;i++) {
        for (int j = 0;j < c2;j++) {
            sum = 0; 
            for (int k = 0; k < c1; k++) {
                sum += a[i][k] * b[k][j]; ///a[0][0]*a[0][0],a[0][1]*a[1][0],a[0][2]*a[2][0]
            }
            c[i][j] = sum; 
        }
    }

    printf("multiplication (%dx%d):\n", r1, c2);
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}
