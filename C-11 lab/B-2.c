#include <stdio.h>
void main(){
    int i,n,sum=0,temp,rem;
    printf("Enter number: ");
    scanf("%d",&n);
    for(;n>0;){
        rem=n%10;
        sum=sum*10+rem;
        n=n/10;
        }
        for(;sum>0;){
        temp=sum%10;
        sum=sum/10;
        printf("%d\n",temp);
    }
}