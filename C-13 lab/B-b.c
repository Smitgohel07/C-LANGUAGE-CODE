/*
1
0 1
0 1 0
1 0 1 0
1 0 1 0 1
*/
#include <stdio.h>
void main(){
    int i,j,m=1;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf("%d ",m);
            if(m==1)
                m--;
            else
                m++;
        }
    printf("\n");
    }
}