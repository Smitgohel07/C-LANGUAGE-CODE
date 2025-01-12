#include <stdio.h>
void main(){
    int i,j,row,column;
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
            if(a[i]>a[j])
            // printf("%d ",a[i][j]=0);
            printf("0 ");
            else
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}