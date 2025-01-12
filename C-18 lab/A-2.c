#include <stdio.h>
int max(int,int);
int min(int,int);
void main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    int maxans = max(a,b);
    int minans = min(a,b);
    printf("Maximum number is :%d and Minimum number is :%d",maxans,minans);
}
int max(int x,int y){
    return (x>y)?(x):(y);
}
int min(int x,int y){
    return (x<y)?(x):(y);
}