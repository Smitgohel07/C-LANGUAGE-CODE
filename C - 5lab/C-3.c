#include <stdio.h>

void main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Multiply by 2 using left shift
    int multiplied = number << 1;
    // Divide by 2 using right shift
    int divided = number >> 1;

    printf("Original number: %d\n", number);
    printf("After multiplying by 2: %d\n", multiplied);
    printf("After dividing by 2: %d\n", divided);

}
