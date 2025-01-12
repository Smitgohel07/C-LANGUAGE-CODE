#include <stdio.h>
int simpleinterest(float,float,float);
void main(){
    float principal,rate,time,interest;
    printf("Enter principal amount: ");
    scanf("%f",&principal);
    printf("Enter rate of interest: ");
    scanf("%f",&rate);
    printf("Enter time period: ");
    scanf("%f",&time);
    interest = simpleinterest(principal,rate,time);
    printf("Simple interest: %.2f",interest);
}
int simpleinterest(float principal,float rate,float time){
    return (principal * rate * time)/100;
}