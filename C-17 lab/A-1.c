#include <stdio.h>
void main(){
    int var;
    int *ptr;
    var = 10;
    ptr = &var;
    printf("Value of variable: %d\n",var);
    printf("Address of variable: %d",ptr);
}