#include <stdio.h>
void main(){
    float principal,roi,time_period,simple_interest;
    printf("Find simple interest\n");
    printf("Enter the value of principal,roi and time of period: ");
    scanf("%f %f %f",&principal, &roi, &time_period);
    simple_interest =(principal*roi*time_period)/100; 
    printf("simple interest is :%f",simple_interest);
}