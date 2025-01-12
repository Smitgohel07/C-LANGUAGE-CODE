/*
1
A B 
1 2 3
C D E F
1 2 3 4 5
*/
#include <stdio.h>
void main(){
    int i,j;
    char c='A';
    for(i=1;i<=5;i++){   
        for(j=1;j<=i;j++){
            if(i==2||i==4){
                printf("%c ",c);
                c++;
            }else{
            printf("%d ",j);
            }
        }
    printf("\n");
    }
}
