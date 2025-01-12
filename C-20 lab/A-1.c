#include <stdio.h>
#include <string.h>

void main(){
    char s1[100];
    char rev[100];
    int i,count=0;
    printf("Enter string: ");
    scanf("%s",s1);
    int len =strlen(s1);
    for(i=0; s1[i]!='\0'; i++){
        rev[i]=s1[len-1-i];
    }
    rev[i]='\0';
    for(i=0; s1[i]!='\0'; i++){
        if(s1[i]==rev[i]){
            count++;
        }
    }
    if(count==len)
      printf("Palindrome");
   else
      printf("Not Palindrome");
            
}