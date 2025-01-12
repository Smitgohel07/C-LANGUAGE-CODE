#include <stdio.h>
void main(){
    int sum=0,n;
    printf("Enter number: ");
    scanf("%d",&n);
    while(n!=0){
        int rem=n%10;
        sum=sum*10+rem;
        n=n/10;
    }
   printf("%d",sum);
}
