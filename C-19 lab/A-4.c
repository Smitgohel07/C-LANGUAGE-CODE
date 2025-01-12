#include <stdio.h>
void main(){
    char s1[100];
    char c;
    int count=0;
    printf("Enter string: ");
    scanf("%s",s1);
    printf("Enter the character to search: ");
    scanf(" %c",&c);
    for(int i=0;s1[i]!='\0';i++){
        if(s1[i]==c){
            printf("The index is %d",i);
            count++;
            break;
        }
    } 
    if(count==0){
        printf("Not found");
    }
}