#include <stdio.h>
void main() {
    char ch;
    printf("Enter character: ");
    scanf("%c",&ch);
    if((ch>='A' && ch<='Z')){
        printf("upper case");///ch>=65 to ch<=90
    }else if(ch>='a' && ch<='z'){
        printf("lower case");///ch>=97 to ch<=122
    }else if(ch>='0' && ch<='9'){
        printf("digit");///ch.>=48 to ch<=57
    }else {
        printf("%c is a special character.", ch);     
    }
}