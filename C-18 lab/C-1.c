#include <stdio.h>
#include "navilib.h"
#include <string.h>
void main(){
    int i;
    char s1[100],s2[100],*s3;
    gets(s1);
    gets(s2);
    s3 = upper(s1);
    printf("%s",s2);
}