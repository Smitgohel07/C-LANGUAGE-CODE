#include <stdio.h>
void main(){
    int sum=0,n,p;
    printf("Enter number: ");
    scanf("%d",&n);
    p=n;
    while(n!=0){
        int rem=n%10;
        sum=sum*10+rem;
        n=n/10;
    }
   if(sum==p)
   printf("%d number is palindrome",p);
   else
   printf("%d number is not palindrome",p);
}