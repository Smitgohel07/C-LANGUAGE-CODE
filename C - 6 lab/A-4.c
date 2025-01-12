#include <stdio.h>
void main() {
    int number,lastdigit;
    printf("Enter integer: ");
    scanf("%d",&number);
    lastdigit=number%10;
    printf("%d is lastdigit\n",lastdigit);
    
    if(lastdigit&1){
        printf("%d is odd",lastdigit);
    }else{
        printf("%d is even",lastdigit);
    }

}