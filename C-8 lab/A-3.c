#include <stdio.h>
void main() {
    int i, a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    while(a<=b){
        if(a%2==0){  
            printf("%d\n",a);
        }
        a++; 
    }
}
