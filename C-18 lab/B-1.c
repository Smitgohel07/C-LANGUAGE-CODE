#include <stdio.h>
void fibbo(int);
void main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    fibbo(n); 
}
void fibbo(int n){
     int a = 0,b = 1,count,ans;
     printf("%d,%d",a,b);
     for(count=1;count<n-1;count++){
        ans=a+b;
        printf(",%d",ans);
        a=b;
        b=ans;
    }   
}