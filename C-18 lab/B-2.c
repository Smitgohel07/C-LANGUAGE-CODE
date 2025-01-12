#include <stdio.h>
void prime(int);
void perfect(int);
// void armstrong(int);
void main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    prime(n);
    perfect(n); 
    
}
void prime(int n){
    int count = 0;
    for(int i=1;i<=n;i++){
     if(n%i == 0){
      count++;
     }
    }
    if(count == 2)
      printf("prime");
}

void perfect(int n){
    int sum = 0;
    for(int i=1; i<n; i++){
         if(n%i==0){
            sum+=i;
         }
    }
    if(sum == n)
    printf("perfect");
}