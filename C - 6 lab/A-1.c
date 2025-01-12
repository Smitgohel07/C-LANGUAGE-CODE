#include <stdio.h>
void main(){
    float num1,num2,choice,result;
    printf("Choose an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1/2/3/4): ");
    scanf("%f", &choice);

    printf("Enter two numbers:\n");
    
    scanf("%f %f",&num1,&num2);
    if (choice==1){
        result=num1+num2;
        printf("%f",result);

    }else if (choice==2){
        result=num1-num2;
        printf("%f",result);
 
    }else if(choice==3){
        result=num1*num2;
        printf("%f",result);
    }else if(choice==4){
        if (num2 != 0) { 
            result = num1 / num2;
            printf("Result: %.2f\n", result);
        }else{
            printf("Error: Division by zero is not allowed.\n");
        }
    }
    else{
        printf("Invalid choice! Please enter a number between 1 and 4.\n");
    }
}    