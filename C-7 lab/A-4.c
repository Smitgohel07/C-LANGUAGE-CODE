#include <stdio.h>
void main(){
    int a,b,c;
    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("Enter value of b: ");
    scanf("%d",&b);
    printf("Enter value of c: ");
    scanf("%d",&c);
    (a>b)?((a>c)?(printf("%d is greater",a)):(printf("%d is greater",c))):((b>c)?(printf("%d is greater",b)):(printf("%d is greater",c)));
}