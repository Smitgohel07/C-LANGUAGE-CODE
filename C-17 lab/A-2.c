#include <stdio.h>
void main(){
    int var = 10;
    int *ptr = &var;

    float fvar = 10.5;
    float *fptr = &fvar;

    double dvar = 10.2578;
    double *dptr = &dvar;

    char cvar = 'A';
    char *cptr = &cvar;
    
    printf("Value of variable: %d\n",*ptr);
    printf("Value of variable: %.2f\n",*fptr);
    printf("Value of variable: %lf\n",*dptr);
    printf("Value of variable: %c",*cptr);
}