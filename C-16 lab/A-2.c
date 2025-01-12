#include <stdio.h>
void main(){
    int i,j,positive=0,negative=0,zero=0;
    int arr[3][3];
    printf("Here 3 x 3 matrix\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
          printf("Enter elements of arr[%d][%d] = ",i,j);
          scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<3;i++){
      for(j=0;j<3;j++){
        if(arr[i][j]>0)
          positive++;
        else if(arr[i][j]==0)
          zero++;
        else
          negative++;
        }
    }
  printf("positive elements = %d, negative elements = %d and zero elements = %d ",positive,negative,zero);          
}