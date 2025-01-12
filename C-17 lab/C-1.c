#include <stdio.h>
void main(){
    char s[100];
    int length=0;
    printf("Enter string: ");
    gets(s);
    char *ptr = s;
    while(*ptr != '\0'){
        ptr++;
        length++;
    }
    printf("%d",length);
}