#include <stdio.h>
void main(){
    int i=1,n,sum=0;
    printf("Enter number: ");
    scanf("%d",&n);
    for(;i<=n;i++){
        sum+=i;
    }
    printf("%d",sum);
}