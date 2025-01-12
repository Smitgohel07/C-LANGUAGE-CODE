#include <stdio.h>
void main(){
    int n,rem,sum=0,b;
    printf("Enter number: ");
    scanf("%d",&n);
    while(n>0){
        rem=n%10;
        sum=sum*10+rem;
        n=n/10; 
    }
    while(sum>0){
        b=sum%10;
        sum=sum/10;
        printf("%d\n",b);
    }
}