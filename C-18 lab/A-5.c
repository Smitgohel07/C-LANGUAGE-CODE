#include <stdio.h>
void swapvalue(int x,int y);
void swapreference(int *x,int *y);
void main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("Before swapping: %d %d\n",a,b);
    swapvalue(a,b);
    swapreference(&a,&b);
}
void swapvalue(int x,int y){
    int temp;
    temp = x;
    x = y;  
    y = temp;
    printf("a = %d,b = %d\n",x,y);
}
void swapreference(int *x,int *y){
    int temp;
    temp = *x;
    *x = *y;  
    *y = temp;
    printf("a = %d,b = %d",*x,*y);
}