#include <stdio.h>
float max(float,float,float);
void main(){
    float a,b,c;
    printf("Enter three numbers(floating): ");
    scanf("%f %f %f",&a,&b,&c);
    float maxans = max(a,b,c);
    printf("Maximum number is :%.2f",maxans);
}
float max(float x,float y,float z){
    float maximum = x; 
    if (y > maximum) {
        maximum = y; 
    }
    if (z > maximum) {
        maximum = z; 
    }
    return maximum; 
}
