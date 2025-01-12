#include <stdio.h>
int factorial(int n);
void main(){
    int n,ans;
    printf("Enter the number: ");
    scanf("%d",&n);
    ans = factorial(n);
    printf("%d",ans);
}
int factorial(int n){
    int i,ans=1;
    for(i=1;i<=n;i++){
        ans *= i;
    }
    return ans;
}


/*
int factorial(int n){
   if(n==1 || n==0){
   return 1;
   }
   return n*factorial(n-1);

}
*/