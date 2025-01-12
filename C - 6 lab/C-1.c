#include <stdio.h>

void main() { 
    int num1, num2, num3;
    int max, second_max;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Enter the third number: ");
    scanf("%d", &num3);

    if (num1 >= num2 && num1 >= num3) {
        max = num1;
        second_max = (num2 > num3) ? num2 : num3;
    } else if (num2 >= num1 && num2 >= num3) {
        max = num2;
        second_max = (num1 > num3) ? num1 : num3;
    } else {
        max = num3;
        second_max = (num1 > num2) ? num1 : num2;
    }

    printf("The second largest number is: %d\n", second_max);
}







