#include <stdio.h>
void main(){
    int number1,number2,i=1,hcf,lcm;
    printf("Enter the value of two numbers : ");
    scanf("%d %d",&number1,&number2);
    while(i<=number1 && number2>=i)
    {
        if(number1 % i==0 && number2 % i==0)
        {
            hcf=i;
        }
        i++;
    }
    lcm=(number1 * number2) / hcf;
    printf("hcf= %d and lcm= %d",hcf,lcm);
}
