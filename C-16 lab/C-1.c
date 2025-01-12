#include <stdio.h>
void main(){
    int i,j,row,column,count=0;
    printf("Enter row and column: ");
    scanf("%d %d",&row,&column);

    int a[row][column];
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("Enter elements: ");
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            if(a[i][j]==0){
               count++;
            }
            printf("%d ",a[i][j]);
        }
        printf("\n");
    } 

    if(count > (row*column)/2)  
      printf("Given matrix is a sparse matrix");
    else
      printf("Given matrix is not sparse matrix");
}