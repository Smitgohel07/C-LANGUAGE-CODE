#include <stdio.h>
void main(){
    float height,base,area;
    printf("Find area of triangle\n");
    printf("Enter the value of height and base: ");
    scanf("%f %f",&height,&base);
    area =(height*base)/2; 
    printf("area of triangle is: %f",area);
}