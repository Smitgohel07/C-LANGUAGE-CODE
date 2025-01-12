#include <stdio.h>
void main(){
    int a,b,c,multiplication,largest;
    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("Enter value of b: ");
    scanf("%d",&b);
    printf("Enter value of c: ");
    scanf("%d",&c);
    largest=(a>b)?(a):(b);
    multiplication=largest * c;
    printf("multiplication with c=%d",multiplication);
}