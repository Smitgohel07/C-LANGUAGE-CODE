#include <stdio.h>
int sum(int,int);
void main(){
    int a,b,ans;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    ans = sum(a,b);
    printf("%d",ans);
}
int sum(int a,int b){
    return a+b;
}