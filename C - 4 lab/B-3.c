#include <stdio.h>
void main(){
    float Temperature_in_celsius,fahrenheit;
    printf("Enter Temperature from fahrenheit: ");
    scanf("%f",&fahrenheit);
    Temperature_in_celsius=(((fahrenheit-32)*5))/9;
    printf("Temperature from fahrenheit to celsius: %f",Temperature_in_celsius); 
}
