#include <stdio.h>
void main(){
    int i=1,n;
    printf("Enter number: ");
    scanf("%d",&n);
    for(;i<=10;i++){
        printf("%d x %d = %d\n",i,n,n*i);
    }
}