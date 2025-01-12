#include <stdio.h>
void main(){
    int a,b;
    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("Enter value of b: ");
    scanf("%d",&b);
    (a^b)?(printf("not equal")):(printf("equal"));
}