#include <stdio.h>
void main(){
    char c;
    printf("Enter alphabet character: ");
    scanf("%c",&c);
    (c>='A' && c<='Z' || c>='a' && c<='z')?(printf("alphabet character")):(printf("alphabet character is not "));

}
