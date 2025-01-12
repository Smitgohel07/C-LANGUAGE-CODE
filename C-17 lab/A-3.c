#include <stdio.h>
void main(){
    int a,b;
    printf("Enter value of A and B: ");
    scanf("%d %d",&a,&b);
    int sum = a + b;
    int *ptr;
    ptr = &sum;
    printf("%d",*ptr);
}