#include <stdio.h>
void main(){
    int i,j,row,column,sum=0;
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
            if(a[i]==a[j]){
            printf("Diagonal elements: %d ",a[i][j]);
            sum += a[i][j];
            }
        }
        printf("\n");
    }
    printf("Sum of diagonal elements: %d",sum);
}    