#include <stdio.h>
void main(){
    int number;
    printf("Enter number: ");
    scanf("%d",&number);
    (number&1)?(printf("odd")):(printf("even"));
}