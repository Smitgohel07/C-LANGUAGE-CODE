#include <stdio.h>
void main(){
    char s1[100];
    char c,c1;
    printf("Enter string: ");
    scanf("%s",s1);
    printf("Enter the character to replace: ");
    scanf(" %c %c",&c,&c1);
    for(int i=0;s1[i]!='\0';i++){
        if(s1[i]==c){
            s1[i]=c1;
        }
    } 
    printf("%s",s1);   
}