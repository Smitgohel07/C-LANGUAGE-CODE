#include <stdio.h>
void main(){
    float basic_salary,hra,da,gross_salary;
    printf("Enter basic salary: ");
    scanf("%f",&basic_salary);
    if(basic_salary>=10000 && basic_salary<20000){
        hra=basic_salary*0.20;
        da=basic_salary*0.80;   
    }else if (basic_salary>=20000 && basic_salary<30000){
        hra=basic_salary*0.25;
        da=basic_salary*0.90;
    }else if (basic_salary>=30000){
        hra=basic_salary*0.30;
        da=basic_salary*0.95;  
    }
    printf("hra=%f da=%f",hra,da);
    gross_salary=basic_salary+hra+da;
    printf("\n%f",gross_salary);
}