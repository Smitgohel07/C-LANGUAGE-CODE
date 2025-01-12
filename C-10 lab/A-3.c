#include <stdio.h>
void main(){
    int i=1,n,count=0;
    printf("Enter number: ");
    scanf("%d",&n);
    while(i<=n){
        if(n%i==0){
            count++;
        }
        i++;
    }if(count==2)
     printf("%d is prime",n);
     else
     printf("%d is not prime",n);
}
