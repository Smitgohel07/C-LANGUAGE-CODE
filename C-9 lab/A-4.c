#include <stdio.h>
void main(){
    int i=1,n,m=1;
    printf("Enter number: ");
    scanf("%d",&n);
    while(i<=n){
        m=i*m;
        if(i < n){
            printf("%d x ",i);
        }else{
            printf("%d",i);
        }
        i++;
    }
    printf(" = %d",m);
}
