#include <stdio.h>
void main(){
    int number;
    float num1,num2,result;
    printf("Choose an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice number (1/2/3/4): ");
    scanf("%d", &number);

    printf("Enter two numbers:\n");
    scanf("%f %f",&num1,&num2);
    switch(number){
        case 1:
        result=num1+num2;
        break;
        case 2:
        result=num1-num2;
        break;
        case 3:
        result=num1*num2;
        break;
        case 4:
        if(num2!=0){result = num1 / num2;}
        else{printf("Error: Division by zero is not allowed.\n");}
        break;
        default:printf("Invalid choice! Please enter a number between 1 and 4.");
        break;
    }printf("%.2f",result);
}