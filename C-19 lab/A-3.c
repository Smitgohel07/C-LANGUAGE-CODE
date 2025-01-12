#include <stdio.h>
#include <string.h>
void main(){
    char s1[100];
    char s2[100];
    printf("Enter string1 and string2: ");
    scanf("%s %s",s1,s2);

    printf("string 1 length:%d\n",strlen(s1));
    if(strcmp(s1,s2)==0)
       printf("Strings are same\n");
    else
       printf("Strings are not same\n");

    printf("copy string: %s\n",strcpy(s1,s2));
    printf("s2 value in s1: %s\n",strcat(s1,s2));
    printf("string convert to lower case: %s\n",strlwr(s2));
    printf("string convert to upper case: %s\n",strupr(s2));
    printf("string reverse: %s",strrev(s2));
}