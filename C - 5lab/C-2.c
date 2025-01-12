#include <stdio.h>
void main(){
    int number;
    printf("Enter integer: ");
    scanf("%d",&number);
    if(number & 1){
        printf("odd");
    }
    else{
        printf("even");
    }
    
}
