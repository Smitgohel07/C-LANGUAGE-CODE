#include <stdio.h>
#include <math.h>
void main(){
    float a,b,c;
    printf("Enter the lengths of the three sides of the triangle:\n");
    scanf("%f %f %f",&a,&b,&c);
    if(a + b > c && a + c > b && b + c > a){
        if(a==b && b==c){
            printf("The triangle is Equilateral.\n");
        }else if(a==b||b==c||c==a){
            printf("The triangle is Isosceles.\n");
        }else{
             printf("The triangle is Scalene.\n");
        }
    }if(((a*a)+(b*b)==(c*c)) || (b*b)+(c*c)==(a*a) || (a*a)+(c*c)==(b*b)){
        printf("The triangle is also Right-Angled.\n");
    }else{ 
        printf("The given sides do not form a valid triangle.\n");
    }
}