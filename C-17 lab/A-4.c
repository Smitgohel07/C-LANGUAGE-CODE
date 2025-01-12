#include <stdio.h>
void main(){
    int a,b,temp; 
    printf("Enter value of A and B: ");
    scanf("%d %d",&a,&b);
    printf("Before swapping a= %d,b= %d\n",a,b);
    temp = a;
    a = b;
    b = temp;
    int *aptr = &a;
    int *bptr = &b;
    printf("swapping a = %d,b = %d",*aptr,*bptr); 
}