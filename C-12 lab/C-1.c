#include <stdio.h>
void main(){
    int i,n,j;
    printf("Enter numbers of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        int num=1;
        for(j=1;j<=i;j++){
            printf("%d ",num);
            num=num*(i-j)/j;
        }
       printf("\n");
    }
}