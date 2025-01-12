#include <stdio.h>
int main(){
    int i=1,n,sum=0;
    printf("Enter number: ");
    scanf("%d",&n);
    while(i<=n){
        sum=sum+i;
        i++;
    }
    printf("sum of %d is = %d",n,sum);
    return 0;
}
