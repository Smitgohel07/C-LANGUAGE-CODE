#include <stdio.h>
void main(){
    int i,j,row,column;
    printf("Enter row and column: ");
    scanf("%d %d",&row,&column);

    int a[row][column];
    int ta[column][row];

    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("Enter elements: ");
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            ta[j][i]=a[i][j];
        }
    }

    printf("\nOriginal Matrix:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < column; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    
    printf("Transposed Matrix:\n");
    for(i = 0; i < column; i++) {
        for(j = 0; j < row; j++) {
            printf("%d ", ta[i][j]);
        }
        printf("\n");
    }
}