#include <stdio.h>
void main(){
    char ch;
    printf("Enter alphabetic character: ");
    scanf("%c",&ch);

    if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch== 'U'){
        printf("vowel");
    }
    else if ((ch>='A' && ch<='Z')||(ch>='a' && ch<='z')){
        printf("consonant");
    }
    
}

