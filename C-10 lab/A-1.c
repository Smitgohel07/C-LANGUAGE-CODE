#include <stdio.h>
void main(){
    int sum=0,n,lastdigit,firstdigit,a;
    printf("Enter number: ");
    scanf("%d",&n);
    a=n;
    while(a!=0){
        if(a==n){
            lastdigit=a%10;
        }
        if(a/10<=0){
            firstdigit=a;
        }  
        a=a/10;
    }
    sum=lastdigit+firstdigit;
    printf("%d",sum); 
}