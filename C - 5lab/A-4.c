#include <stdio.h>   
void main()
{
    int num1;   
    printf("Input a number : ");   
    scanf("%d", &num1);      
    if (num1 % 2 == 0){  
        printf("%d is an even number", num1);} 
    else{
        printf("%d is an odd number", num1);}    
}
