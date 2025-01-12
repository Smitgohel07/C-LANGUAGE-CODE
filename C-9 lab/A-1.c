#include <stdio.h>
void main(){
    int i=1,n,sum=0;
    printf("Enter number: ");
    scanf("%d",&n);
    while(i<=n){
        if(i%2==0){
            sum-=i;
        }else{
            sum+=i;
        }
        i++;
    }
    printf("= %d",sum);
}
