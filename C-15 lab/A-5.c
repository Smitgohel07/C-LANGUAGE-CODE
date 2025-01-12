#include <stdio.h>
#include <string.h>
void main(){
    char s1[100];
    printf("Enter string: ");
    gets(s1);
    puts(s1);
    printf("%d",strlen(s1)); 
}