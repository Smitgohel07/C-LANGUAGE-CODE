#include <stdio.h>
void main(){
    int a,b,multiplication=0;
    printf("Enter two numbers a and b: ");
    scanf("%d %d",&a,&b);
    if(a==0||b==0)
    {
        printf("0");
    }
    else
    {
        int i=1;
        while(i<=b){
            multiplication+=a; 
            i++;
        }
         printf("Multiplication of %d and %d is: %d\n",a,b,multiplication);
    }
}
