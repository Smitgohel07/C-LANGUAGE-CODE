#include <stdio.h>
void main(){
    int i=65;
    while(i<=122){
        if(i<=90){
            printf("all upper case alphabet value is -> %c\n",i);
        }else if(i>=97){
            printf("all lower case alphabet value is -> %c\n",i);
        }
    i++;
    }
}
