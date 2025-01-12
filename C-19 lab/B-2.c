#include <stdio.h>
#include <string.h>
void upr(int);
void main(){
    char s1[200];
    printf("Enter string: ");
    scanf("%s",s1);
    upr(s1);
    printf("%d",upr(s1));
}
int upr(int s1){
    return strupr(s1);
}