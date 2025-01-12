#include <stdio.h>
void main(){
    int number,a;
    printf("Enter a number: ");
    scanf("%d",&number);

    if (number > 0) {
        printf("The number is positive.\n");
    } else if (number < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }
}




