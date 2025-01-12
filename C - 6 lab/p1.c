#include <stdio.h>
void main(){
    int a,b,rem,quo;
    printf("Enter two numbers a and b: ");
    scanf("%d %d",&a,&b);
    printf("%d divided by %d\n",a,b);
    while(a>=b){
        quo++;
        a=a-b;
    }
    if(a>=0){
        rem=a;
    }
    else{
        rem=a+b;
    }
    printf("quotient=%d and reminder=%d",quo,rem);
}   
